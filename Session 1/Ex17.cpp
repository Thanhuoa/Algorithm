/* Bài 17. Hình thoi
- Input
5
- Output 
*
**
***
****
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

    for(int i=1; i<n*2; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
            if(i>n && j==n*2-i) break; 
        }
        cout << endl;
    }
    return 0;
}