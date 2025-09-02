/* Ex8: So hoan hao.
So hoan hao la so cos tong cac uoc thuc su (khong tinh chinh no) bang chinh so do.
Cho mot so nguyen duong n, kiem tra xem n co phai la so hoan hao hay khong.

Input:
- Dong dau tien la so luong test case T (1<=T<=100).
- T dong tiep theo moi dong la 1 so nguyen duong n (1<=n<=10^18).
Output:
- Moi test case in ra tren 1 dong. YES neu n la so hoan hao, nguoc lai in NO.

Ex:
Input                      		 		Output
2
28                          			YES
2,305,843,008,139,952,128         		YES
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int perfectNumber(ll n) {
    ll sum=1;
    if(n==1) return 0;
    else {
        // Find sum
        for(ll i=2; i<=sqrt(n); i++) {
            if(n%i==0) {
                if(i*i==n) sum+=i;
                else {
                    if(i!=n/i) sum+=(i+n/i);
                    else sum+=i;
                }
            }
        }
        // Exit
    }
    return sum==n;
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

        // Check if number is perfect number then print "YES"; else print "NO"
        if(perfectNumber(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
