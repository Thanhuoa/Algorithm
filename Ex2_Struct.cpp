/* Ex2. Viết chương trình định nghĩa kiểu cấu trúc NGAYTHANG bao gồm 3 thuộc tính
(ngày, tháng, năm). Dựa trên kiểu cấu trúc NGAYTHANG đã có, tiếp tục định nghĩa kiểu cấu 
trúc SinhVien bao gồm các thông tin (mã sinh viên, họ đệm, tên, ngày tháng năm sinh, 
giới tính, hộ khẩu thường trú, điểm thi đại học). 
Viết các hàm con thực hiện các chức năng sau đây:
- Nhập danh sách sinh viên từ bàn phím.
- Hiển thị danh sách sinh viên đã nhập.
- Sắp xếp danh sách sinh viên theo điểm tăng dần.
- Hiển thị danh sách sau khi sắp xếp.
Viết hàm main thực hiện các chức năng kể trên.
*/
#include <iostream>
#include <string>
#include <math.h>
#include <limits>
using namespace std;

typedef struct BORN {
    int day;
    int month;
    int year;
} born;

typedef struct STUDENT {
    born born;
    string code;
    string surname;
    string name;
    string sex;
    string address;
    float point;
} student;

void enter_student(student *stu) {
    cout << "       Student's code: ";
    cin.ignore();
    getline(cin, stu->code);

    cout << "       Surname: ";
    getline(cin, stu->surname);
 
    cout << "       Name: ";
    getline(cin, stu->name);

    cout << "       Sex: ";
    getline(cin, stu->sex);

    cout << "       Day of birth: ";
    cin >> stu->born.day >> stu->born.month >> stu->born.year;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "       Address: ";
    getline(cin, stu->address);

    cout << "       Point: ";
    cin >> stu->point;
}

void enter_list(student *stu, int n) {
    cout << "-- Enter the student's information!";
    for(int i=0; i<n; i++) {
        cout << "- Enter the student no." << i+1 << endl;
        enter_student(stu+i);
    }
}

void print_student(student *stu) {
    cout << stu->code << "  ";
    cout << stu->surname << " ";
    cout << stu->name << "  ";
    cout << stu->born.day << "-" << stu->born.month << "-" << stu->born.year << "  ";
    cout << stu->sex << "   ";
    cout << stu->address << "   ";
    cout << stu->point << endl;
}

void print_list(student *stu, int n) {
    cout << "----------------------------------------------\n";
    for(int i=0; i<n; i++) {
        print_student(stu+i);
    }
    cout << "----------------------------------------------\n";
}

void arrange(student *stu, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if((stu+i)->point > (stu+j)->point) {
                student tmp = *(stu+i);
                *(stu+i) = *(stu+j);
                *(stu+j) = tmp;
            }
        }
    }
}

int main() {
    student *stu;
    int n, tmp;
    do {
        cout << "Enter the number of students: ";
        cin >> n;
    } while(n<=0);
    stu = new student[n];
    enter_list(stu,n);
    print_list(stu,n);

    cout << "--The list after arranging!\n";
    arrange(stu,n);
    print_list(stu,n);
    delete(stu);
    return 0;
}