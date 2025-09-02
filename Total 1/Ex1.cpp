/*Ex1: So thuan nghich.
Kiem tra so thuan nghich.

Input:
- Dong dau tien la so luong test case T (1<=T<=100).
- T dong tiep theo moi dong la mot so nguyen duong n (1<=n<=10^18)
Output:
- Moi test cace in tren 1 dong, in YES neu n la so thuan nghich, NO trong truong hop nguoc lai.

Ex:
Input				Output
2
10019				NO
999999999999999		YES
*/
#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int check(ll n) {
	ll res=0, tmp=n;
	while(tmp!=0) {
		res+=res*10+tmp%10;
		tmp/=10;
	}
	if(res==n) return 1;
	return 0;
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
		ll n;
		do {
			cout << "Enter n: ";
			cin >> n;
			if(n<1 || n>pow(10,18)) cout << "Enter n again!\n";
		} while(n<1 || n>pow(10,18));
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
