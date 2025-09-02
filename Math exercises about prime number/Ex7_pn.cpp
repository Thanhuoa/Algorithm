/*Ex7: Cap so nguyen to co tong bang N
Cap so nguyen to
Cho so nguyen duong chan N>2. Hay liet ke cac cap so nguyen to p,q co tong dung bang N. 
Vi du N=6 ta co 1 cap so nguyen to la 3+3=6
Input:
- Dong dau tien dua vao so luong bo test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so chan N.
- T, N thoa man rang buoc: 1<=T<=100; 4<=N<=10000
Output:
- Dua ra ket qua moi test theo tung dong.
Ex:
Input				Output
2
4					2 2
6					3 3
*/

#include <iostream>
#include <math.h>
using namespace std;

int prime(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}


int main() {
	int t, n;
	do {
		cout << "Enter T (times): ";
		cin >> t;
		if(t<1 || t>100) cout << "Enter T again!\n"; 
	} while(t<1 || t>100);
	
	int count=t;
	while(t--) {
		do {
			cout << "---------------\n";
			cout << "Test " << count-t << "\n";
			cout << "Enter N: ";
			cin >> n;
			if(n<4 || n>10000) cout << "Enter T, N again!\n";
		}	while(n<4 || n>10000);
		
		for(int i=2; i<n; i++) {
			for(int j=2; j<n; j++) {
				if(prime(i) && prime(j)) {
					if(i+j==n) cout << i << " " << j << "\n";
				}	
			}
			
		}
	}
	
	return 0;
}
