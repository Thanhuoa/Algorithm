/*
Kiem tra so nguyen to 2
Input: 
- Dong dau tien la so luong test case T (1<=T<=1000)
- Moi test case la mot so nguyen n (0<=n<=10^6)
Output:
- In ra ket qua moi test case tren mot dong. In YES neu n la so nguyen to, nguoc lai la NO
Ex:
Input               Output
4					
2					YES
3					YES
20					NO
188					NO
*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int prime[1000001];

void sieve(){
	for(int i=0; i<=pow(10,6); i++) {
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	
	for(int i=2; i<=sqrt(pow(10,6)); i++) {
		if(prime[i]) {
			for(int j=i*i; j<=pow(10,6); j+=i) prime[j]=0;
		}
	}
}


int main() {
	int t, n;
	do{
		cout << "Enter T: ";
		cin >> t;
		if(t<1 || t>1000) cout << "Enter T agian!\n"; 
	} while(t<1 || t>1000);
	
	sieve();
	int count=t;
	cout << "Enter n: \n";
	while(t--) {
		do {
			cout << "Case " << count-t << ": ";
			cin >> n;
			if(n<0 || n>pow(10,6)) cout << "Enter n again!";
		} while(n<0 || n>pow(10,6));
		
		if(prime[n]) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
