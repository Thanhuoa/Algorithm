/* Liet ke N so nguyen to dau tien
Viet chuong trinh liet ke N so nguyen to dau tien voi N la mot so nguyen duong khong qua 10^5
Input:
- Du lieu vao chi co duy nhat mot so N
Output:
- Ket qua ghi moi so nguyen to tren mot dong, theo thu tu tu nho den lon.
Ex:
Input						Output
5							2
							3
							5
							7
							11
*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int prime(int n) {
	for(int i=2; i<n; i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}

int main() {
	int n;
	do {
		cout << "Enter N: ";
		cin >> n;
		if(n<1 || n>pow(10,5)) cout << "Enter N again!";
	}	while(n<1 || n>pow(10,5));
	
	int a=2;
	while(n>0) {
		if(prime(a)) {
			cout << a << "\n";
			--n;
		}
		a++;
	}
	
	return 0;
}
