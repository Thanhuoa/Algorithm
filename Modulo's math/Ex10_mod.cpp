/* Bài 10. last digit
- Input
1 dòng duy nhất gồm cơ số và số mũ và cơ số a,b (0<a,b<=10^9)..
- Output
In ra chữ số cuối cùng của a^b

Ví dụ
Input                   Output
2 10                    4
5 1000000000            5
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int solve(ll a, ll b) {
    int res=1;
    while(b) {
        if(b%2==1) {
            res*=a;
            res%=10;
        }
        a*=a;
        a%=10;
        b/=2;
    }
    return res;
}

int main() {
    ll a,b;
    do {
        cout << "Enter a,b: ";
        cin >> a >> b;
    } while(a*b<0 || a>pow(10,9) || b>pow(10,10));
    cout << solve(a,b) << endl;
    
    return 0;
}