/* Ex21
Arrow 2
- Input
5
- Output
~~~~*****
~~~****
~~***
~**
*
~**
~~***
~~~****
~~~~*****
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    // Create the bellow half of arrow 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n-i)*2+1; j++) {
            if(j<=((n-i)*2+1/2)) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
    // Create the end of arrow
    for(int i=1; i<n; i++) {
        for(int j=1; j<=i*2+1; j++) {
            if(j<=i) cout << "~";
            else cout << "*";
        }
        cout << endl;
    } 
    return 0;
}