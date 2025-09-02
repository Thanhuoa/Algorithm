/* Bài 32. Thuận nghịch và có 3 ước số nguyên tố.
Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số
nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn
giữa hai số nguyên cho trước.
- Input
Dòng duy nhất là 2 số nguyên dương a,b (1<=a<=b<=10^9).
- Output
In ra các số đẹp trong đoạn từ a tới b. Trong trường hợp không tồn tại số đẹp trong
đoạn từ a tới b thì in ra -1.

Ví dụ
Input                       Output
1 1000                      66 222 252 282 414 434 444 474 494
                            525 555 585 595 606 616 636 646 666
                            696 777 828 858 868 888 969
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int swap(ll n) {
    ll temp=n, res=0;
    while(n!=0) {
        res=res*10+n%10;
        n/=10;
    }
    return res==temp;
}

int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int check(ll n) {
    int cnt=0;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            if(prime(i)) cnt++;
            while(n%i==0) n/=i;
        }
    }
    if(n>1 && prime(n)==1) cnt++;
    return cnt>=3;
}

int main() {
    ll a,b;
    do {
        cout << "Enter [a;b]: ";
        cin >> a >> b;
    } while((a<1 || a>pow(10,9)) || (a>b) || (b<1 || b>pow(10,9)));

    for(ll i=a; i<=b; i++) {
        if(check(i)==1 && swap(i)==1) cout << i << " ";
    }


    return 0;
}