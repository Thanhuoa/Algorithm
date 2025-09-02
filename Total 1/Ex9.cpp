/* Ex9: Tong chu so.
Tinh tong chu so cua 1 so nguyen duong n.

Input:
- Dong dau tien la so luong test case T (1<=T<=100).
- T dong tiep theo moi dong la 1 so nguyen duong n (1<=n<=10^18).
Output:
- Moi test case in ra tren 1 dong tong cac chu so cua n.

Ex:
Input                       Output
2
10000000000000000000        1
124                         7
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int sumNumber(ll n) {
    int sum=0;
    while(n) {
        sum+=n%10;
        n/=10;
    }
    return sum;
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
        
        // Find sum number alphas
        cout << sumNumber(n) << endl;
    }
    return 0;
}