/* Bài 33. Đếm ước của n!
Đếm số lượng ước của n!.
- Input
Dòng đầu tiên là số lượng test case T (1<=T<=100).
Mỗi test case là một số nguyên không âm n (1<=n<=100).
- Output
In ra kết quả mỗi test case trên 1 dòng.

Công thức: n=e1^p1+e2^p2...+er^pr
    -> d(n)=(p1+1)(p2+1)...(p3+1)
Ví dụ
Input               Output
2
10                  270
97                  26494182162432000
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int prime(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}

int degree(int n, int p) {
	int ans=0;
	for(int i=p; i<=n; i*=p) ans+=n/i;
	return ans;
}

ll countDivisor(int n) {
	ll res=1;
	for(int i=1; i<=n; i++) {
		if(prime(i)) {
			res*=(degree(n,i)+1);
		}
	}
	return res;
}

int main() {
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
    } while(t<1 || t>100);

    for(int z=1; z<=t; z++) {
        cout << "Test case " << z << endl;
        int n;
        do {
            cout << "Enter n: ";
            cin >> n;
        } while(n<1 || n>100);

        cout << countDivisor(n) << endl;
    }

    return 0;
}