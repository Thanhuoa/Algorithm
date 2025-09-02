/*Exercise 3
Sang so nguyen to tren doan
Input:
2 so nguyen khong am a, b (0<=a<=b<=10^9, b-a<=10^5)
Output
In ra cac so nguyen to (prime) trong đoạn từ a tới b (Chu y lay ca 2 can)
Ex:
Input: 4 20
Output: 5 7 11 13 17 19
*/

#include <iostream>
#include <math.h>
using namespace std;

int max(int n, int m) {
	if(n>m) return n;
	else return m;
}

void sieve(int l, int r) {
	int prime[r-l+1];
	for(int i=0; i<=r-l+1; i++) {
		prime[i]=1;
	}
	for(int i=2; i<=sqrt(r); i++) {
		for(int j=max(i*i,(l+i-1)/i*i); j<=r; j+=i) {
			prime[j-l]=0;
		}
	}
	for(int i=max(2,l); i<=r; i++) {
		if(prime[i-l]) cout << i << " ";
	}
}

int main() {
    int l, r;
    do {
        cout << "Enter [l;r]: ";
        cin >> l >> r;
        if(l<0 || r<0 || l>pow(10,9) || r>pow(10,9) || l>r || (r-l)>=pow(10,5)) 
			cout << "Enter n again!" << "\n"; 
    } while(l<0 || r<0 || l>pow(10,9) || r>pow(10,9) || l>r || (r-l)>=pow(10,5));
    
    sieve(l,r);
    return 0;
}
