/* Bài 7. Tam giác 3
- Input
5
- Output
    *
   **
  ***
 ****
*****
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=n; i>0; i--) {
        for(int j=0; j<i; j++) cout << " ";
        for(int z=0; z<n-i+1; z++) cout << "*";
        cout << endl;
    }
    return 0;
}