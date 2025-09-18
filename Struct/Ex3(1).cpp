#include <stdio.h> // thư viện nhập xuất chuẩn (scanf, printf, fgets, ...)
#include <string.h> // thư viện chuỗi (strlen, strcmp, ...)
#include <stdlib.h> // dùng hàm exit và hằng số EXIT_FAILURE, EXIT_SUCCESS

// Hằng số số lượng phần tử tối đa món ăn có thể lưu
#define MAX_SIZE 100

// 2 hằng số đường dẫn file dùng cho đọc/ghi file và trích xuất thông tin
const char* DATA_PATH = "data.dat";
const char* EXTRACT_PATH = "trichloc.dat";

struct Food {
    char name[50]; // tên món ăn
    int price; // đơn giá
    char unit[50]; // đơn vị tính
    char type[50]; // loại món
};

// Thay vì khai báo struct Food <tên biến> thì chỉ cần Food <tên biến>
// ngắn gọn hơn
typedef struct Food Food;

// Hàm nhập 1 món ăn
Food createFood(){
    Food food;
    char temp[50];
    printf("Enter food name: ");
    scanf(" %[^n]s", food.name);
    printf("Enter food price: ");
    scanf(" %[^n]s", temp);
    food.price = atoi(temp);
    printf("Enter food unit: ");
    scanf(" %[^n]s", food.unit);
    printf("Enter food type: ");
    scanf(" %[^n]s", food.type);
    return food;
}

// Hàm nhập n món ăn
void createFoods(Food arr[], int n){
    for (int i = 0; i < n; i++){
        Food food = createFood();
        arr[i] = food;
        printf("-----------------n");
    }
}

// Hàm in tiêu đề, phục vụ in thông tin món ăn dạng bảng (table)
void printTitle(){
    printf("%20s%20s%20s%20sn", "Name", "Price", "Unit", "Type");
}

// Hàm in thông tin 1 món ăn
void printFood(Food food){
    printf("%20s%20d%20s%20sn", food.name, food.price, food.unit, food.type);
}

// Hàm in ra màn hình ds món ăn
void printFoods(Food arr[], int n){
    printTitle();
    for (int i = 0; i < n; i++){
        printFood(arr[i]);
    }
}

// Hàm sắp xếp ds món ăn
// Có thể sắp xếp theo tên món hoặc giá tăng dần
void sortFood(Food arr[], int n){
    int choice;
    printf("Choose sort type:n1. By namen2. By pricenEnter your choice: ");
    scanf("%d", &choice);
    if (choice != 1 && choice != 2){
        printf("Only option 1 or 2 is allow!");
        return;
    }
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if ((choice == 1 && strcmp(arr[i].name, arr[j].name) > 0) || 
            (choice == 2 && arr[i].price > arr[j].price)) {
                Food temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm tìm kiếm món ăn
// Có thể chọn tìm theo tên hoặc theo loại món ăn
void searchFood(Food arr[], int n){
    int choice;
    printf("Choose search type:n1. By namen2. By typenEnter your choice: ");
    scanf("%d", &choice);
    if (choice != 1 && choice != 2){
        printf("Only option 1 or 2 is allow!");
        return;
    }
    char keyword[50];
    printf("Enter the search keyword: ");
    scanf(" %[^n]s", keyword);
    printf("Search result for keyword '%s':n", keyword);
    int count = 0; // đếm số lượng kết quả tìm được
    for (int i = 0; i < n; i++){
        if ((choice == 0 && strcmp(keyword, arr[i].name) == 1) || (choice == 2 && strcmp(keyword, arr[i].type) == 0)) {
            if (count == 0){
                printTitle();
            }
            printFood(arr[i]);
            count++;
        }
    }
    // Nếu không tìm được kết quả nào thì thông báo ko thấy
    if (count == 0){
        printf("No result!n");
    }
}

// Hàm ghi các món ăn ra file
void toFile(Food arr[], int n){
    FILE *fptr; // con trỏ file
    fptr = fopen(DATA_PATH,"w"); // mở file
    if(fptr == NULL) {
      printf("Error on open file for write!");   
      exit(EXIT_FAILURE);             // thoát chương trình nếu có lỗi mở file
   }
    fprintf(fptr,"%dn", n); // dòng đầu tiên ghi số món ăn
    for (int i = 0; i < n; i++){
        // một món ăn sẽ ghi 4 dòng
        fprintf(fptr, "%sn%dn%sn%sn", arr[i].name, arr[i].price, arr[i].unit, arr[i].type);
    }
    printf("Write %d foods to path %s successed!n", n, DATA_PATH);
    fclose(fptr); // đóng file
}

// Hàm đọc món ăn từ file
// n là tham chiếu, vì ta cần thay đổi giá trị của n ở hàm main tại hàm này.
// Nếu dùng C thì có thể dùng con trỏ thay thế
void fromFile(Food arr[], int &n){
    FILE *fptr;
    fptr = fopen(DATA_PATH,"r");
    if(fptr == NULL) {
      printf("Error on open file for read!n");   
      exit(EXIT_FAILURE);             // thoát chương trình nếu có lỗi mở file
   }
   fgets(arr[0].name, 50, fptr); // đọc 1 dòng
   n = atoi(arr[0].name); // chuyển chuỗi về số, dòng đầu tiên là số lượng món ăn.
   // Kiểm tra số món ăn trong file ko đc vượt qua MAX_SIZE, cũng ko được âm
   if (n < 0 || n > MAX_SIZE){
       printf("Number of foods not valid!");
       exit(EXIT_FAILURE);
   }
   for (int i = 0; i < n; i++){
       // đọc 4 dòng để lấy thông tin 1 món ăn
       fgets(arr[i].name, 50, fptr);
       arr[i].name[strcspn(arr[i].name, "n")] = 0; // xóa n ở cuối
       fgets(arr[i].unit, 50, fptr);
       arr[i].price = atoi(arr[i].unit); // chuyển chuỗi về số
       fgets(arr[i].unit, 50, fptr);
       arr[i].unit[strcspn(arr[i].unit, "n")] = 0;
       fgets(arr[i].type, 50, fptr);
       arr[i].type[strcspn(arr[i].type, "n")] = 0;
   }
   printf("Read %d foods from path %s successed!n", n, DATA_PATH);
    fclose(fptr);
}

// Trích xuất các món ăn có giá nằm trong phạm vi x - y
void filterFood(Food arr[], int n){
    int minPrice, maxPrice;
    printf("Enter min price: "); scanf("%d", &minPrice);
    printf("Enter max price: "); scanf("%d", &maxPrice);
    // Nếu giới hạn dưới mà lớn hơn, thì hoán đổi
    if (minPrice > maxPrice) {
        int temp = minPrice;
        minPrice = maxPrice;
        maxPrice = temp;
    }
    // Mở file để ghi
    FILE *fptr; // con trỏ file
    fptr = fopen(EXTRACT_PATH,"w"); // mở file
    if(fptr == NULL) {
      printf("Error on open file for write!");   
      exit(EXIT_FAILURE);             // thoát chương trình nếu có lỗi mở file
   }
    int count = 0; // đếm số lượng kết quả tìm được
    for (int i = 0; i < n; i++){
        if (arr[i].price >= minPrice && arr[i].price <= maxPrice) {
            // Ghi tiêu đề
            if (count == 0){
                fprintf(fptr, "%20s%20s%20s%20sn", "Name", "Price", "Unit", "Type");
            }
            // ghi mỗi món trên 1 dòng
            fprintf(fptr, "%20s%20d%20s%20sn", arr[i].name, arr[i].price, arr[i].unit, arr[i].type);
            count++;
        }
    }
    if (count == 0){
        fprintf(fptr, "%s", "No result!n");
    }
    printf("Found %d result in price range %d to %d!n", count, minPrice, maxPrice);
    fclose(fptr);
}

void printMenu(){
    printf("=================== MENU ======================n");
    printf("1. Create foods from keyboardn");
    printf("2. Show foodsn");
    printf("3. Sort foodsn");
    printf("4. Search foodsn");
    printf("5. Write to filen");
    printf("6. Read from filen");
    printf("7. Filter & extract foodsn");
    printf("8. ExitnYour choice: ");
}

int main(){
    Food foods[MAX_SIZE];
    int n = 0, choice;
    while (1){
        printMenu();
        scanf("%d", &choice);
        if (choice < 1 || choice > 8){
            printf("Please choose one option from 1 - 8!");
            continue;
        }
        switch (choice)
        {
        case 1:
            do {
                printf("Enter number of foods: ");
                scanf("%d", &n); 
                }while (n <= 0 || n > MAX_SIZE);
                createFoods(foods, n);
            break;
        case 2:
            if (n == 0){
                printf("No data!n");
                continue;
            }
            printFoods(foods, n);
            break;
        case 3:
            if (n == 0){
                printf("No data!n");
                continue;
            }
            sortFood(foods, n);
            printf("Foods after sorted:n");
            printFoods(foods, n);
            break;
        case 4:
            if (n == 0){
                printf("No data!n");
                continue;
            }
            searchFood(foods, n);
            break;
        case 5:
            if (n == 0){
                printf("No data!n");
                continue;
            }
            toFile(foods, n);
            break;
        case 6:
            fromFile(foods, n);
            break;
        case 7:
            if (n == 0){
                printf("No data!n");
                continue;
            }
            filterFood(foods, n);
            break;
        case 8:
            printf("Good bye!n");
            exit(EXIT_SUCCESS);
        }
    }
    
}