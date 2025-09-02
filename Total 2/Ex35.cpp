/* Bài 35. Đối với số nguyên dương n hãy xác định hàm f:
f(n)=-1+2-3+..+[(-1)^n]n
Nhiệm vụ của bạn là tính f(n) cho một số nguyên n đã cho.
- Input
Dòng đơn chứa số nguyên dương n (1<=n<=10^15).
- Output
In f(n) trong một dòng duy nhất

Ví dụ
Input                   Output
4                       2
5                       -3
*/
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

ll cal(ll n) {
    ll sum=0;
    for(int i=1; i<=n; i++) {
        sum+=pow(-1,i)*i;
    }
    return sum;
}

int main() {
    ll n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(n<1 || n>pow(10,15));
    cout << cal(n) << endl;

    return 0;
}