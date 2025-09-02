/* Ex5: Dem so luong uoc cua 1 so nguyen duong n.
 
Input:
- Dong dau tien la so luong test case T (1<=t<=100).
- T dong tiep theo moi dong la 1 so nguyen duong n (1<=n<=10^9)
Output:
- Moi test case in ra tren 1 dong.

Ex:
Input			Output
2
10				4
28				6
*/
#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

// Case 1
int count1(ll n) {
	int count=0;
	for(ll i=1; i<=n; i++) {
		if(n%i==0) count++;
	}
	return count;
}

// Case 2
int count2(ll n) {
	int count=0;
	for(int i=1; i<=sqrt(n); i++) {
		if(n%i==0) {
			if(i!=n/i) count+=2;
			else ++count;
		}
	}
	return count;
}

// Another case of count2
/*
int count2(ll n) {
int count=0;
	for(int i=1; i<=sqrt(n); i++) {
		if(n%i==0) count+=2;
	}
	
	int check=sqrt(n);
	if(check*check==n) --count;
	return count;
}
*/

// Case 3
/*  
n = p1^(e1) * p2^(e2) *...* pk^(ek)
d(n) = (e1+1)*(e2+1)*...*(ek+1)
Ex: n=60=(2^2)*3*5
-> d(60)=(2+1)*(1+1)*(1+1)=12
*/
int count3(ll n) {
	int res=1;
	if(n==1) return 1;
	else {
		for(ll i=2; i<=sqrt(n); i++) {
			int count=0;
			while(n%i==0) {
				count++;
				n/=i;
			}
			res*=(count+1);
		}
	}
	if(n!=1) res*=2;
	return res;
}



int main() {
	// Find t
	int t;
	do {
		cout << "Enter t: ";
		cin >> t;
		if(t<1 || t>100) cout << "Enter t again!\n";
	} while(t<1 || t>100);
	
	for(int i=0; i<=40; i++) cout << "-";
	cout << endl;
	
	while(t--) {
		// Find n
		ll n;
		do {
			cout << "Enter n: ";
			cin >> n;
			if(n<1 || n>pow(10,9)) cout << "Enter n again!\n";
		} while(n<1 || n>pow(10,9));
		
		cout << "Case 1: " << count1(n) << endl;
		cout << "Case 2: " << count2(n) << endl;
		cout << "Case 3: " << count3(n) << endl;
		if(t!=0) {
			for(int i=0; i<=40; i++) cout << "-";
			cout << endl;
		}
	}
	return 0;
}
