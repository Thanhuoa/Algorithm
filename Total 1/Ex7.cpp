/* Ex7: So co uoc le.
Kiem tra xem mot so co so luong uoc so cua no la so le.

Input:
- Dong dau tien la so luong test case T (1<=n<=100).
- T dong tiep theo moi dong la 1 so nguyen duong n (1<=n<=10^18).
Output:
- Moi test case in ra tren 1 dong. YES neu n co so luong uoc le; nguoc lai in NO.

Ex:
Input					Output
1
1000000000000000000		YES
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int countDivisor(ll n) {
    int count=0;
    for(ll i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            if(i!=n/i) count+=2;
            else count++;
        }
    }
    if(count%2==0) return 0;
    return 1;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter t again!\n";
    } while(t<1 || t>100);

    while(t--) {
        ll n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<1 || n>pow(10,18)) cout << "Enter n again!\n";
        } while(n<1 || n>pow(10,18));
        
        // Print Yes/No 
        if(countDivisor(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}