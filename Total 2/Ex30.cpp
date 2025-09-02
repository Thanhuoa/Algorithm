/* Ước chung lớn nhất, bội chung nhỏ nhất.
Tìm ước chung lớn nhất của 2 số nguyên không âm a và b.
- Input
2 số nguyên không âm a và b (0<=a,b<=10^9).
- Output
In ra ước chung lớn nhất của 2 số và bội chung nhỏ nhất của 2 số.

Ví dụ
Input                       Output
100 20                      20 100
17 29                       1 493
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}

int main() {
    ll a,b;
    do {
        cout << "Enter a,b (a>=0 and b>=0): ";
        cin >> a >> b;
    } while((a<0 || a>pow(10,9)) || (b<0 || b>pow(10,9)));
    cout << gcd(a,b) << " " << lcm(a,b);
    return 0;
}