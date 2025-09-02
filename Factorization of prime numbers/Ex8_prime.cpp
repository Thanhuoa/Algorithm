/* Ex8: Uoc so nguyen to lon nhat cua so nguyen duong.
Input:
- Dong dau tien la so luong test case T (1<=t<=100).
- T dong tiep theo moi dong la mot so nguyen duong n (1<=n<=10^6).
Output:
- Uoc so nguyen to lon nhat cua n in ra moi test case tren 1 dong.

Ex:
Input		Output
2
10			5
17			17
*/
#include <iostream>
#include <math.h>
using namespace std;

int largestFactor(int n) {
	int larg;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			larg=i;
			while(n%i==0) n/=i;
		}
	}
	if(n!=1) return n;
	return larg;
}
 
int main() {
	// Find t
	int t;
	do {
		cout << "Enter t: ";
		cin >> t;
		if(t<1 || t>100) cout << "Enter t again!\n";
	} while(t<1 || t>100);
	
	while(t--) {
		// Find n
		int n;
		do {
			cout << "Enter n: ";
			cin >> n;
			if(n<1 || n>pow(10,6)) cout << "Enter n again!\n";
		} while(n<1 || n>pow(10,6));
		cout << largestFactor(n) << "\n";
	}
	
	return 0;
}
