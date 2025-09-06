/* Bài 11. Tam giác 7
- Input
5
- Output
    *
   * *
  *   *
 *     *
*********
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) cout << " ";
        for(int j=1; j<=2*i-1; j++) {
            if(i==1 || i==n || j==1 || j==2*i-1) cout << "*";
            else cout << " ";
        } 
        cout << endl;
    }
    return 0;
}