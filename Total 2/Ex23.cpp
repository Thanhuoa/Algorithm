/* Bài 23. Nguyên tố cùng nhau.
Nhập 2 số nguyên dương a,b. Xác định xem 2 số vừa nhập có phải là 2 số nguyên
tố cùng nhau.
- Input
2 số nguyên dương a,b (1<=a,b<=10^12).
- Output
In YES nếu 2 số a,b nguyên tố cùng nhau, ngược lại in NO.

Ví dụ
Input               Output
20 17               YES
14 15               YES
8 128               NO
*/
#include <iostream>
#include <math.h>
using namespace std;

int ucln(int a, int b) {
    int c;
    while(b!=0) {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main() {
    int a,b;
    do {
        cout << "Enter a,b: ";
        cin >> a >> b;
    } while((a<1 || a>pow(10,12)) || (b<1 || b>pow(10,12)));

    if(ucln(a,b)==1) cout << "YES";
    else cout << "NO";

    return 0;
}