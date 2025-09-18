/*Ex3. Write a program to organize data to manage dishes, each dish includes the following information:
name, money, unit (i.e. vnd), type of food,...
Write functions do:
- Enter list of food
- Display list
- Arrange increasing/decreasing list depend on 1 random criteria (according to price)
- Search for dishes according to arbitrary criteria
- Save the receipt list to file
- Read dish data from file
- Filter dish information according to an optional criteria and export the results to a file
}
*/
#include <iostream>
#include <string.h>
#include <limits>
using namespace std;

typedef struct dish {
    string name;
    int price;
    string unit;
    string type_food;
} Dish;

const char* DATA_PATH = "Dishes list.text";

void enter_dish(Dish *di) {
    cout << "       Name: ";
    getline(cin, di->name);

    cout << "       Money: ";
    cin >> di->price;

    cout << "       Unit: ";
    getline(cin, di->unit);

    cout << "       Type of food: ";
    getline(cin, di->type_food);
}

void enter_list(Dish *di, int n) {
    cout << "-- Enter the dish list!\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0; i<n; i++) {
        cout << "- Enter the dish no" << i+1 << ": " << endl;
        enter_dish(di+i);
    }
}

void print_list(Dish *di, int n) {
    cout << "======================MENU=========================\n";
    for(int i=0; i<n; i++) {
        cout << i+1 << "." << (di+i)->name << "  " << (di+i)->price << "  " << (di+i)->unit << "  " << (di+i)->type_food << endl;
    }
    cout << "===================================================\n";
}

void listSort(Dish *di, int n, int choice) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if((choice==1 && (di+i)->price > (di+j)->price) || (choice==2 && (di+i)->price<(di+i)->price)) {
                Dish tmp = *(di+i);
                *(di+i) = *(di+j);
                *(di+j) = tmp;
            }
        }
    }
    
}

void searchFood(Dish *di, int n) {
    string choice;
    cout << "What's food you looking for?\n";
    fd: cout << "Your choice: ";
    cin.ignore();
    getline(cin, choice);
    
    // Search the food in list
    for(int i=0; i<n; i++) {
        if((di+i)->name == choice) {
            cout << "---------------------------------------------------\n";
            cout << "       Name: " << (di+i)->name << endl;
            cout << "       Money: " << (di+i)->price << endl;
            cout << "       Unit: " << (di+i)->unit << endl;
            cout << "       Type of food: " << (di+i)->type_food << endl;
            cout << "---------------------------------------------------\n";
            break;
        }
        else {
            cout << "Sorry! Your choice isn't here, please choose another food\n";
            goto fd;
        }
    }
}

void toFile(Dish *di, int n) {
    FILE *f;
    f = fopen(DATA_PATH,"w+");
    if(f == NULL) {
        cout << "Error on open file for writing!\n";
        exit(EXIT_FAILURE);
    }
    fprintf(f,"======================MENU=========================\n");
    fprintf(f,"The number of food: %d\n",n);
    for(int i=0; i<n; i++) {
        fprintf(f,"%s %d %s %s\n", (di+i)->name, (di+i)->price, (di+i)->unit, (di+i)->type_food);
    }
    fprintf(f,"===================================================\n");
    printf("Write %d the food the path %s successed!\n", n, DATA_PATH);
    fclose(f);
}


int main() {
    Dish *di;
    int n;
    do {
        cout << "Enter the number of dishes (n<=100): ";
        cin >> n;
    } while(n<0 || n>100);

    di = new Dish[n];
    enter_list(di,n);
    print_list(di,n);

    int choice;
    cout << "-- You choose to sort the list according to increasing or decreasing!!\n";
    cout << "1 is increasing, 2 is decreasing: ";
    do {
        cin >> choice;
        if(choice<1 || choice>2) cout << "Enter choice again!\n";
    } while(choice<1 || choice>2);
    listSort(di,n,choice);
    print_list(di,n);
    toFile(di,n);

    searchFood(di,n);
    delete(di);
    return 0;
}