/* Bài 31. Phi hàm Euler 2
Cho số nguyên dương n, nhiệm vụ của bạn là in ra @(i) với 1<=i<=n.
Trong đó @(i) là phi hàm Euler của i.
- Input
Dòng đầu tiên là số lượng bộ test T (1<=T<=100)
Mỗi test case là một số nguyên dương n (1<=n<=10^6).
- Output
In ra kết quả mỗi test case trên 1 dòng.

Ví dụ
Input                           Output
1
10                              1 1 2 2 4 2 6 4 6 4
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int phi(ll n) {
    ll res=n;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            res=res-res/i;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) res-=res/n;
    return res;
}

int main() {
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
    } while(t<0 || t>100);

    while(t--) {
        cout << "Case " << t+1 << endl;
        ll n;
        do {
            cout << "Enter n: ";
            cin >> n;
        } while(n<1 || n>pow(10,6));

        for(ll i=1; i<=n; i++) {
            cout << phi(i) << " ";
        }
        cout << endl;
    }

    return 0;
}