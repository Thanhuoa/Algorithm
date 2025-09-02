/* LCM Sum.
 Cho s? nguy�n d��ng n, t�nh t?ng lcm(1,n) + lcm(2,n)+...+lcm(n,n)
 Trong �� lcm(a,b) l� b?i chung nh? nh?t c?a a v� b.
 - Input
 D?ng �?u ti�n l� s? l�?ng test case T (1<=T<=300000)
 M?i test case l� m?t s? nguy�n d��ng n (1<=n<=1000000)
 - Output
 In k?t qu? m?i test case tr�n 1 d?ng
 
 V� d?
 Input							Output
 2
 5								55
 1000000						2933779482000000
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
	return a*b/gcd(a,b);
}

int main() {
	int t;
	do {
		cout << "Enter t: ";
		cin >> t;
	} while(t<1 || t>300000);
	
	while(t--) {
		ll n;
		do {
			cout << "Enter n: ";
			cin >> n;
		} while(n<1 || n>1000000);
		ll sum=0;
		for(int i=1; i<=n; i++) {
			sum+=lcm(i,n);
		}
		cout << sum << endl;
	}
	
	return 0;
}