/*Ex5: Dem so luong chu so 0 cua n!.
Input:
- Dong dau tien la so luong test case T (1<=t<=100).
- T dong tiep theo moi dong la mot so nguyen duong n (1<=n<=10^6).
Output:
- In ra so luong chu so 0 lien tiep tinh tu cuoi cua n!.

Ex:
Input           Output
2
10              2
20              4
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int fac(ll n) {
    int count=0;
    for(ll i=n-1; i>0; i--) n*=i;
    while(n) {
        int sign=n%10;
        if(sign==0) count++;
        else break;
        n/=10;
    }
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
            if(n<1 || n>pow(10,6)) cout << "Enter n again!\n";
        } while(n<1 || n>pow(10,6));
        
        // Print number
        cout << fac(n) << endl;
    }
    return 0;
}