/* Ex1. The rectangle no.1
- Input
5
- Output
10101
01010
10101
01010
10101
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }

    return 0;
}