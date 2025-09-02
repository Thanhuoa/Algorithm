/* Ex7: So Smith.
Cho so tu nhien N. Nhiem vu cua ban la hay kiem tra N co phai la so Smith hay khong.
Mot so duoc goi la so Smith neu N khong phai la so nguyen to va co tong cac chu so N bang tong 
cac chu so cua cac uoc so nguyen to cua N. 
Vi du N=666 co cac uoc so nguyen to la 2,3,3,37 co tong cac chu so la 18

Input:
- Dong dau tien dua vao so luong test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so nguyen N.
- T, N thoa man rang buoc 1<=T<=100; 1<=N<=100000
Output:
- Dua ra ket qua moi test theo tung dong.

Ex:
Input       Output
2
4           YES
666         YES
*/

#include <iostream>
#include <math.h>
using namespace std;

int smith(int n) {
	int sum1=0, sum2=0;
	int tmp=n;
	// Find sum of n's numbers
	while(tmp!=0) {
		sum1+=tmp%10;
		tmp/=10;
	}
	// Check n is prime number or not
	for(int i=2; i<=sqrt(n); i++) {
		// if n%i==0 then n is smith number -->> find n's factors
		if(n%i==0) {
			for(int j=2; j<=sqrt(n); j++) {
				while(n%j==0) {
					sum2+=j%10;
					n/=j;
				}
			}
			if(n!=1) {
				while(n!=0) {
					sum2+=n%10;
					n/=10;
				}
			}
			break;
		}
	}
	if(sum1==sum2) return 1;
	return 0;
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
        int n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<1 || n>pow(10,5)) cout << "Enter n again!\n";
        } while(n<1 || n>pow(10,5));
        
        // Find value
        if(smith(n)) cout << "YES\n"; 
        else cout << "NO\n";
    }
    return 0;
}
