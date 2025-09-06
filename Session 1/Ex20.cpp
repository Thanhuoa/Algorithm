/* Bài 20. Mũi tên 1
- Input
5
- Output
*****
~~****
~~~~***
~~~~~~**
~~~~~~~~*
~~~~~~**
~~~~***
~~****
*****
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    // Create the half of arrow
    for(int i=1; i<n; i++) {
        for(int j=1; j<=2*(i-1); j++) cout << "~";
        for(int j=1; j<=n-i+1; j++) cout << "*";
        cout << endl;
    }
    // Create the continue of arrow
    for(int i=n-1; i>0; i--) {
        for(int j=1; j<=2*(i-1); j++) cout << "~";
        for(int j=1; j<=n-i+1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}