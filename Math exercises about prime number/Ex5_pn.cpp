/*
So nguyen to va chu so nguyen to
Viet chuong trinh dem xem trong doan [a,b] co bao nhieu so la so nguyen
to va tat ca cac chu so cua no cung la so nguyen to
Input:
- Dong dau ghi so bo test
- Moi bo test ghi 2 so a, b (1<a<b<10^6)
Ouput:
- Voi moi bo test, ghi ra so luong so thoa man tren mot dong
Ex:
Input								Output
2
10 100								4
1234 5678							26
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

int digitPrime(int n) {
	while(n) {
		int x = n%10;
		if(x!=2 && x!=3 && x!=5 && x!=7) return 0;
		n/=10;
	}
	return 1;
}

int main() {
	int t;
	cout << "Enter t (times): ";
	cin >> t;
	
	while(t--) {
		int a, b;
		do {
			cout << "Enter [a;b]: ";
			cin >> a >> b;
			if(a<1 || b<1 || a>b || a>pow(10,6) || b>pow(10,6)) cout << "Enter [a;b] agian!";
		}	while(a<1 || b<1 || a>b || a>pow(10,6) || b>pow(10,6));
	
		int count=0;
		for(int i=a; i<=b; i++) {
			if(prime(i) && digitPrime(i)) {
				++count;
			}
		}
		cout << count << "\n";	
	}
	return 0;
}
