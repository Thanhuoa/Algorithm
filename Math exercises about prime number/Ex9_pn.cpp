/*Ex9: Nguyen to cung nhau
Viet chuong trinh nhap hai so nguyen duong a,b thoa man 2<a<b<100.
Mot cap so (i,j) duoc goi la nguyen to cung nhau neu i!=j va uoc so chung lon nhat 
cua i voi j la 1
Hay liet ke cac cap so nguyen to cung nhau trong doan [a,b] theo thu tu tu nho den lon.
Input:
- Chi co mot dong ghi hai so a,b.
Output:
- Cac cap so i,j thoa ma duoc viet lan luot tren tung dong theo dinh dang (i,j) theo
thu tu tu dien.
Ex:
Input							Output
5 8								(5,6)
								(5,7)
								(5,8)
								(6,7)
								(7,8)
*/

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}

void check(int a, int b) {
	for(int i=a; i<b; i++) {
		for(int j=i+1; j<=b; j++) {
			int t=a;
			int sign=1;
			while(t-- && t!=1) {
				if(i%t==0 && j%t==0) {
					sign=0;
					break;
				}
			}
			if(sign) cout << "(" << i << "," << j << ")\n";	
		}
	}
}

int main() {
	int a,b;
	do {
		cout << "Enter a,b: ";
		cin >> a >> b;
		if(a<=2 || b<=2 || a>=b || a>=100 || b>=100) cout << "Enter a,b again!\n";
	}	while(a<=2 || b<=2 || a>=b || a>=100 || b>=100);
	
	check(a,b);
	return 0;
}

/*
#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return 0;
	return gcd(b, a%b);
}

int main() {
	int a,b;
	cin >> a >> b;
	for(int i=a; i<b; i++) {
		for(int j=i+1; j<=b; j++) {
			if(gcd(i,j)==1) {
				cout << i << " , " << j;
			}
		}
	}
	return 0;
}
*/
