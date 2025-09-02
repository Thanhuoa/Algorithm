/* Bài 39. Mã hàng hoá
Trong mã hàng hoá người ta thường ghi kèm theo mã số quốc gia sản xuất.
Nếu sản xuất tại Việt Nam thì mã tương ứng là 084.
Bài toán đặt ra là cho một dãy mã dạng số nguyên không quá 18 chữ số.
Hãy loại bỏ đoạn mã 084 ra khỏi mã ban đầu.
Dữ liệu đảm bảo dãy mã luôn có duy nhất một lần cụm 084.
- Input
Dòng đầu ghi số bộ test. 
Mỗi test là một số nguyên có ít nhất 4 chữ số những không quá 18 chữ số.
- Output
Ghi ra kết quả sau khi loại bỏ 084.

Ví dụ
Input                       Output
3                           
123084567                   123567
3300478808445               3300478845
1084                        1
*/
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
#define ll long long

void del084(string a) {
    for(int i=0; i<a.size(); i++) {
        if(a[i]=='0' && a[i+1]=='8' && a[i+2]=='4') {
            a[i]=a[i+1]=a[i+2]='x';
        }
    }
    for(int i=0; i<=a.size(); i++) {
        if(a[i]!='x') cout << a[i];
    }
    cout << endl;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>1000);
    
    while(t--) {
        string a;
        do {
            cout << "Enter code: ";
            cin.ignore();
            getline(cin,a);
            
        } while(a.size()<4 || a.size()>18);
        del084(a);
    }

    return 0;
}