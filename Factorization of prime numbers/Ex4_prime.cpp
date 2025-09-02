/* Ex4: Luy thua va giai thua.
Cho so tu nhien N va so nguyen to P. Nhiem vu cua ban la tim so x lon nhat de N! 
chia het cho p^x. Vi du voi N=7, p=3 thi x=2 la so lon nhat de 7! chia het cho 3^2

Input:
- Dong dau tien dua vao so luong bo test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la cap so N, p duoc viet cach
nhau mot vai khoang trong.
- T, N, p thao man rang buoc: 1<=t<=100; 1<=N<=10^5; 2<=p<=5000

Output:
- Dua ra ket qua moi test theo tung dong.

Ex:
Input           Output
3
62 7            9
76 2            73
3 5             0
*/

#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int gt(ll n, int p) {
    int x=0;
    for(int i=1; i<=n; i++) {
        if(i%p==0) {
            int tmp=i;
            while(tmp%p==0) {
                x++;
                tmp/=p;
            }
        }
    }
    return x;
}

int main() {
    // Enter t
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<0 || t>100) cout << "Enter t again!\n";
    } while(t<0 || t>100);

    while(t--) {
        // Enter n 
        ll n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<0 || n>pow(10,5)) cout << "Enter n again!\n";
        } while(n<0 || n>pow(10,5));
        
        // Enter p
        int p;
        do {
            cout << "Enter p: ";
            cin >> p;
            if(p<2 || p>5000) cout << "Enter p again!\n";
        } while(p<2 || p>5000);

        // Find the factorial
        if(prime(p)) {
            cout << gt(n,p) << endl;
        }
    }
    return 0;
}