/*Bài 9. Tam giác 5
- Input
5
- Output
*
**
* *
*  *
*****
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(i<=2 || i==n) {
            for(int j=0; j<i; j++) cout << "*";
            cout << endl;
        }
        else {
            for(int j=0; j<i; j++) {
                if(j==0 || j==i-1) cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}