/* Ex2: So chinh phuong.
Kiem tra so chinh phuong.

Input:
- Dong dau tien la so luong test case t (1<=t<=100).
- T dong tiep theo moi dong la mot so nguyen duong n (1<=n<=10^18).
Output:
- Moi test case in tren 1 dong, in YES neu n la so chinh phuong, NO trong truong 
hop nguoc lai.

Ex:
Input                   Output
2
24                      NO
1000000000000000000     YES
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int isSquareNumber(ll n) {
    ll check=sqrt(n);
    if(check*check==n) return 1;
    else return 0;
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
            if(n<0 || n>pow(10,18)) cout << "Enter n again!\n";
        } while(n<0 || n>pow(10,18));

        // Consider this number
        if(isSquareNumber(n)) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}