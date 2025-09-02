/* Ex6: So Sphenic.
So nguyen duong N duoc goi la so Sphenic duoc phan tich duoi dang tich cua ba so khac nhau.
Vi du N=30 la so Sphenic vi 30 = 2x3x5; N=60 khong phai so Sphenic vi 60 = 2x2x3x5.
Cho so tu nhien N, nhiem vu cua ban la kiem tra xem N co phai so Sphenic hay khong?
Mot so so Sphenic dau tien: 30, 42, 66, 70, 78, 102

Input:
- Dong dau tien dua vao so luong bo test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so nguyen duong N.
- T, N thoa man rang buoc: 1<=T<=100; 1<=N<=10000.
Output:
- Dua ra 1 hoac 0 tuong ung voi N la so Sphenic hoac khong cua moi test theo tung dong.

Ex:
Input           Output
2
30              1
60              0
*/

#include <iostream>
#include <math.h>
using namespace std;

int fi(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        int count=0;
        while(n%i==0) {
            count++;
            n/=i;
        }
        if(count>1) return 0; 
    }
    return n>1;
}

int main() {
    // Enter t
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter t again!\n"; 
    } while(t<1 || t>100);

    while(t--) {
        // Enter n
        int n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<1 || n>10000) cout << "Enter n again!\n";
        } while(n<1 || n>10000);
        
        // Print 1 or 0
        cout << fi(n) << "\n";
    }
    return 0;
}
