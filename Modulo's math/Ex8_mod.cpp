/* Bài 8. Last digit
Cho n, in ra chữ số cuối cùng của 1378^n.
- Input
Dòng đầu vào chưa một số nguyên n (0<=n<=10^9).
- Output
In số nguyên đơn - chữ số cuối cùng của 1378^n.

Ví dụ
Input           Output
2               4
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int solve(ll n) {
    int res=1, x=1378;
    while(n) {
        if(n%2==1) {
            res*=x;
            res%=10;
        }
        x*=x;
        x%=10;
        n/=2;
    }
    return res;
}

int main() {
    ll n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(n<0 || n>pow(10,9));
    cout << solve(n) << endl;

    return 0;
}