/* Bài 18. Hình thoi 2
- Input
5
- Output
~~~~*
~~~***
~~*****
~*******
*********
~*******
~~*****
~~~***
~~~~*
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    // Chia nửa trên nửa dưới ra code
    for(int i=1; i<=n; i++) {
        for(int j=1; j<n+i; j++) {
            if(j<=n-i) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<2*n-i; j++) {
            if(j<=i) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}