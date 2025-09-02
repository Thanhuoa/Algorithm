/* Bài 2. Tổng modulo1.
Cho hai số nguyên không âm N và K. 
Nhiệm vụ của bạn là tìm S=1%K + 2%K +...+ N%K.
Ví dụ với N=10, K=2 ta có S=1%2 + 2%2 + 3%2 + 4%2 + 5%2 + 6%2 +
7%2 + 8%2 + 9%2 + 10%2 = 5
- Input
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp mỗi dòng đưa vào một test.
Mỗi test là bộ đôi N, K được viết cách nhau một vài khoảng trống.
T,N,K thoả mãn ràng buộc: 1<=T<=100; 0<=N<=1000; 0<=K<=10^12
- Output
Đưa ra kết quả the mỗi test
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ
Input                       Output
2
10 55                       55
1 11                        1
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int solve(ll n, ll k) {
    int total=0;
    for(int i=1; i<=n; i++) {
        total += i%k;
    }
    return total;
}

int solve2(ll n, ll k) {
    int x = n/k;
    int r = n%k;
    ll tong1 = (k-1)*k/2;
    ll tong2 = r*(r+1)/2;
    return tong1*x+tong2;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>100);
    
    while(t--) {
        ll n,k;
        do {
            cout << "Enter n,k: ";
            cin >> n >> k;
        } while(n*k<0 || n>1000 || k>pow(10,12));
        cout << solve(n,k) << endl;
    }
    
    return 0;
}