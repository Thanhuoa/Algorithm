/* Ex4: Tinh tong uoc cua 1 so nguyen duong n.

Input:
- Dong dau tien la so luong test case T (1<=T<=100).
- T dong tiep theo moi dong la 1 so nguyen duong n (1<=n<=10^9)
Output:
- Moi test case in ra tren 1 dong.

Ex:
Input			Output
2
10				18
28				56
*/
#include <iostream>
#include <math.h>
using namespace std;

int sumDivisor(int n) {
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(n%i==0) sum+=i;
	}
	return sum;
}

int sumDivisor2(int n) {
	int sum=0;
	for(int i=1; i<=sqrt(n); i++) {
		if(n%i==0) {
			if(i!=n/i) sum+=(i+n/i);
			else sum+=i;
		}
	}
	return sum;
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
			if(n<0) cout << "Enter n again!\n";
		} while(n<0);
		
		cout << "Case 1: " << sumDivisor(n) << endl;
		cout << "Case 2: " << sumDivisor2(n) << endl;
	}
	
	return 0;
}
