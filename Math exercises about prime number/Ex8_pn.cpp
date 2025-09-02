/* Ex8: So thuan nguyen to
Mot so duoc coi la thuan nguyen to neu no la so nguyen to, tat ca cac chu so la
nguyen to va tong chu so cua no cung la mot so nguyen to. Bai toan dat ra la dem
xem trong mot doan giua hai so nguyen to cho truoc co bao nhieu so thuan nguyen to
Input:
- Dong dau tien ghi so bo test. Moi bo test viet tren mot dong hai so nguyen duong tuong ung,
cach nhau mot khoang trong. Cac so deu khong vuot qua 9 chu so
Output:
- Moi bo test viet ra so luong cac so thuan nguyen to tuong ung
Ex:
Input 					Output
2
23 199					1
2345 6789				15
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
		int x=n%10;
		if(x!=2 && x!=3 && x!=5 && x!=7) return 0;
		n/=10;
	}
	return 1;
}

int total(int n) {
	int s=0;
	while(n) {
		s+=n%10;
		n/=10;
	}
	return prime(s);
}

int main() {
	int t;
	cout << "Enter a number of test: ";
	cin >> t;
		
	while(t--) {
		int a,b;
		cout << "Enter a,b: ";
		cin >> a >> b;
		int cnt=0;
		for(int i=a; i<=b; i++) {
			if(prime(i) && digitPrime(i) && total(i)) cnt++; 
		}
		cout << cnt << "\n";
	}
	return 0;	
}
