/* Bài 14. Thuận nghịch và có 3 ước số nguyên tố
Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số
nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn
giữa hai số nguyên cho trước.
- Input
Dòng duy nhất là 2 số nguyên dương a,b (1<=a<=b<=10^9)
- Output
In ra các số đẹp trong đoạn từ a tới b. Trong trường hợp không tồn tại số đẹp trong
đoạn từ a tới b thì in ra -1.

Ví dụ
Input                   Output
1 1000                  66 222 252 282 414 434 444 474 494
                        525 555 585 595 606 616 636 646 666
                        696 777 828 858 868 888 969
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int reciprocal(ll n) {
    ll temp=n, sign=0;
    while(temp>0) {
        sign+=temp%10;
        temp/=10;
        if(temp!=0) sign*=10;
    } 
    if(sign==n) return 1;
    return 0;
}

int prime(ll n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int divisor(ll n) {
    int cnt=0;
    for(ll i=1; i<=n/2; i++) {
        if(prime(i)==1 && n%i==0) cnt++;
        if(cnt==3) return 1;
    }
    return 0;
}

int main() {
    ll a,b;
    do {
        cout << "Enter a,b (1<=a<=b<=10^9): ";
        cin >> a >> b;
    } while((a<1 || a>pow(10,9)) || (a>b) || (b<1 || b>pow(10,9)));
    
    int cnt=0;
    for(ll i=a; i<=b; i++) {
        if(reciprocal(i)==1 && divisor(i)==1) {
            cout << i << " ";
            cnt++;
            if(cnt==9) {
                cout << endl;
                cnt=0;
            }
        }
    }
    return 0;
}