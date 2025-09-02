/* Ex13: Uoc so nguyen to nho nhat (Su dung san bien doi).
Cho so tu nhien N. Nhiem vu cua ban la in ra uoc so nguyen to nho nhat cua cac so tu 1 den N. 
Uoc so nguyen to nho nhat cua 1 la 1. Uoc so nguyen to nho nhat cua cac so chan la 2. 
Uoc so nguyen to nho nhat cua cac so nguyen to la chinh no.

Input:
- Dong dau tien dua vao so luong test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so N duoc ghi tren mot dong.
- T,N thoa man rang buoc: 1<=T<=1000; 1<=N<=100000.

Output:
- Dua ra ket qua moi test theo tung dong.

Ex:
Input                   Output
2
6                       1 2 3 2 5 2
10                      1 2 3 2 5 2 7 2 3 2
*/

#include <iostream>
#include <math.h>
using namespace std;

int prime[100001];

int sieve() {
    for(int i=0; i<=100000; i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=0; i<=sqrt(100000); i++) {
        if(prime[i]) {
            for(int j=i*i; j<=100000; j+=i) prime[j]=0;
        }
    }
}

int main() {
    // Enter T
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>1000) cout << "Enter T again!\n";
    } while(t<1 || t>1000);

    sieve();

    // Decrease T to run program
    while(t--) {
        // Enter N
        int n;
        do{
            cout << "Enter n: ";
            cin >> n;
            if(n<1 || n>100000) cout << "Enter N again!\n";
        } while(n<1 || n>100000);

        for(int i=1; i<=n; i++) {
            if(i==1) cout << 1 << " ";
            else {
                for(int j=1; j<=i; j++) {
                    if(prime[j] && i%j==0) {
                        cout << j << " ";
                        break;
                    } 
                }
            }
        }

        cout << endl;
    }

    return 0;
}