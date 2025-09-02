/* Ex3: Dem thua so nguyen to
Hay dem so luong thua so nguyen to khac nhau trong phan tich thua so nguyen to
cua 1 so nguyen duong n.

Input:
- Dong dau tien la so luong test case T (1<=n=100)
- T dong tiep theo moi dong la mot so nguyen duong n (1<=n<10^9).
Output:
- So luong thua so nguyen to khac nhau cua n.

Ex:
Input           Output
3
60              3
128             1
10000           2
*/

#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int prime(ll n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int check(ll n) {
    int count=0;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            count++;
            while(n%i==0) n/=i;
        }
    }
    if(n!=1) count++;
    return count;
}

int main() {
    // Enter t
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter t again!\n";
    } while(t<1 || t>100);

    while(t--) {
        // Enter n
        ll n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<1 || n>pow(10,9)) cout << "Enter n again!\n";
        } while(n<1 || n>pow(10,9));
        cout << check(n) << endl;
        /*int count=0;
        for(int i=1; i<=n; i++) {
            if(prime(i) && n%i==0) {
                count++;
                while(n%i==0) n/=i;
            }
        }
        cout << count <<  "\n";*/
    }
    return 0;
}