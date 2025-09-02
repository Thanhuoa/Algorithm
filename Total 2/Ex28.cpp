/* Bài 28. Số nguyên dương nhỏ nhất
Cho 4 số nguyên dương x,y,z,n.
Tìm số nguyên dương nhỏ nhất có n chữ số chia hết cho cả x,y và z.
- Input
4 số nguyên dương x,y,z,n (1<=x,y,z<=10^4). n<=16
- Output
Kết quả của bài toán, trường hợp không tìm được số thoả mãn in -1.

Ví dụ
Input                           Output
2 3 5 4                         1020
3 5 7 2                         -1
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

int solve(int x, int y, int z, int n) {
    ll tmp = lcm(lcm(x,y),z);
    ll m = (ll)pow(10,n-1);
    ll res = (m+tmp-1)/tmp*tmp;
    if(res<(ll)pow(10,n)) return res;
    return -1;
}

int main() {
    int x,y,z,n;
    do {
        cout << "Enter x,y,z,n: ";
        cin >> x >> y >> z >> n;
    } while((x<1 || x>pow(10,4)) || (y<1 || y>pow(10,4)) || (z<1 || z>pow(10,4)) || n>16 || n<1);
    cout << solve(x,y,z,n) << endl;
    return 0;
}