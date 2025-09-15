/* Bài 12. Tam giác 8
- Input
5
- Output
1 ********* 9
2  ******* 7
3   *****  5
4    ***  3
5     *   1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i-1; j++) cout << " ";
        for(int j=1; j<=(n-i)*2+1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}