/* Bài 40. Số đẹp
Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại;
đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thoả mãn là một số thuận nghịch.
Ví dụ: các số 36788766; 1234564322 là các số đẹp
Viết chương trình kiểm tra số đẹp theo tiêu chí trên.
- Input
Dòng đầu ghi số bộ test.
Mỗi test là một số nguyên dương không quá 18 chữ số.
- Output
Ghi ra YES tương ứng với số đẹp. No trong trường hợp ngược lại.

Ví dụ
Input                           Output
3
36788766                        YES
22345654321                     YES
12345654321                     NO
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

#define ll long long

int check(string n) {
    int begin=n[0]-'0', last=n[n.size()-1]-'0';
    if((begin==2*last) || (2*begin==last)) return 1;
    return 0;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        cin.ignore();
    } while(t<1 || t>1000);
    while(t--) {
        string n;
        do {
            cout << "Enter n: ";
            
            getline(cin,n);
        } while(n.size()<1 || n.size()>19);
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;

}