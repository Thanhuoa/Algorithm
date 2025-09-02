/* Ex12: T-prime 3
Cho hai so L, R. Nhiem vu cua ban la hay dem tat ca cac so co dung ba uoc so trong
khoang [L,R]. Vi du L=1, R=10, ta co ket qua la 2 vi chi co so 3 va 9 la co dung 3 uoc so.

Input:
- Dong dau tien dua vao so luong test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la cap so L,R.
- T,N thoa man rang buoc 1<=T<=100, 1<=L,R<=10^12.
Output:
- Dua ra ket qua moi test theo tung dong.

Ex:
Input                   Output
2                       
1 10                    2
1 10^12                 78498
*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

long long prime[1000001];

int sieve() {
    for(int i=0; i<=1000000; i++) prime[i]=1;
    prime[0]=prime[1]=0;

    for(int i=2; i<=sqrt(1000000); i++) {
        if(prime[i]) {
            for(int j=i*i; j<=1000000; j+=i) prime[j]=0;
        }
    }
}

int main() {
    // Enter T
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
        if(t<1 || t>pow(10,12)) cout << "Enter T again!\n";
    } while(t<1 || t>pow(10,12));

    sieve();

    while(t--) {
        // Enter R,L
        long long r,l;
        do {
            cout << "Enter L,R: ";
            cin >> l >> r;
            if(r<0 || l<0 || r>pow(10,12) || l>pow(10,12)) cout << "Enter L,R again!\n";
        } while(r<0 || l<0 || r>pow(10,12) || l>pow(10,12));

        int count=0;
        for(int i=sqrt(l); i<=sqrt(r); i++) {
            if(prime[i] && i*i>=l) count++;
        }
        cout << count << endl;
        
    }

    return 0;
}