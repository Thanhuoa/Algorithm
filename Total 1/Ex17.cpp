/* Số lộc phát
Một số được gọi là "lộc phát" nếu chỉ có các chữ số 0,6,8. Nhập vào một số
nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số lộc phát hay 
không. Nếu đúng in ra 1, sai in ra 0.

Ví dụ
Input                       Output
6808                        1
16808                       0
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int check(ll n) {
    while(n>0) {
        int temp=n%10;
        if(temp!=0 && temp!=6 && temp!=8) return 0;
        n/=10;
    }
    return 1;
}

int main() {
    ll n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(99999999-n<0);

    if(check(n)) cout << 1;
    else cout << 0;
    return 0;
}