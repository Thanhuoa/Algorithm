/*Ex9: Binh phuong nguyen to.
Mot so duoc coi la so dep khi no dong thoi vua chia het cho mot so nguyen to va
chia het cho binh phuong cua so nguyen to do. Viet chuong trinh liet ke cac so dep
nhu vay trong doan giua hai so nguyen duong cho truoc.

Input:
- 2 so nguyen duong a,b (1<=a<=b<=10^6).
Output:
- In ra cac so dep trong doan tu a toi b.

Ex:
Input		Output
1 50		4 8 9 12 16 18 20 24 25 27 28 32 36 40 44 45 48 49 50
*/
#include <iostream>
#include <math.h>
using namespace std;

/*int prime(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}

void check(int a, int b) {
	for(int i=a; i<=b; i++) {
		for(int j=2; j<=sqrt(i); j++) {
			if(prime(j) && i%(j*j)==0) cout << i << " ";
		}
	}
}*/

int sodep(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			int count=0;
			for(int i=2; i<=sqrt(n); i++) {
				count++;
				n/=i;
			}
			if(count>=2) return 1;
		}
	}
	return 0;
}

int main() {
	// Find a,b
	int a,b;
	do {
		cout << "Enter a,b: ";
		cin >> a >> b;
		if(a+b<=1 || b<a || a>pow(10,6) || b>pow(10,6)) cout << "Enter a,b again!\n";
	} while((a+b<=1 || b<a || a>pow(10,6) || b>pow(10,6)));
	
	for(int i=a; i<=b; i++) {
		if(sodep(i)) cout << i << ' ';
	}
	
	return 0;
}
