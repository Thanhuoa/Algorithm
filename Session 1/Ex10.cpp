/*Bài 10. Tam giác 6
- Input
5
- Output
    *
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n-i; j++) cout << " ";
        for(int z=1; z<=2*i-1; z++) cout << "*";
        cout << endl;
    }

    return 0;
}