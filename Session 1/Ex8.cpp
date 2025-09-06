/* Bài 8. Tam giác 4
- Input
5
- Output
*****
 ****
  ***
   **
    *
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=n; i>0; i--) {
        for(int z=0; z<n-i; z++) cout << " ";
        for(int j=0; j<i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}