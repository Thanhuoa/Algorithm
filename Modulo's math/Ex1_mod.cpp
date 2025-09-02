/* Bài 1. Pow mod
Cho ba số nguyên dương x,y,p. 
Nhiệm vụ của bạn là tính (x^y)%p.
Ví dụ với x=2, y=3, p=5 thì (2^3)%5=3.
- Input
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp mỗi dòng đưa vào một test. 
Mỗi test là bộ ba x,y,p được viết cách nhau một vài khoảng trống.
T,x,y,p thoã mãn ràng buộc: 1<=T<=100; 1<=x,y<=10^6; 1<=P<=10^9+7
- Output
Đưa ra kết quả mỗi test theo từng dòng.
Công thức: (a*b)%c=(a%c)*(b%c)
Ví dụ
Input                       Output
2
2 3 5                       3
3 2 4                       1
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int powMod(int x, int y, int p) {
    ll total=1;
    for(int i=1; i<=y; i++) {
        total*=x%p;
    }
    return total%p;
}

int powMod2(int x, int y, int m) {
    ll res=1;
    while(y) {
        if(y%2==1) {
            res*=x;
            res%=m;
        }
        x*=x;
        x%=m;
        y/=2;
    }
    return res;
}

int powMod3(int x, int y, int m) {
    if(y==0) return 1;
    int tmp=powMod3(x,y/2,m);
    if(y%2==1) return (x%m*((tmp%m)*(tmp%m)%m))%m;
    else return (tmp%m)*(tmp%m)%m;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>100);
    while(t--) {
        ll x,y,p;
        do {
            cout << "Enter x,y,p: ";
            cin >> x >> y >> p;
        } while(x*y<1 || x>pow(10,6) || y>pow(10,6) || p<1 || p>pow(10,9)+7);
        cout << powMod(x,y,p) << endl;
    }
    return 0;
}

/*2 3 5
res=1

res=2
res=2
x=4
x=4
y=1

res=8
res=3
x=16
x=1
y=0
*/