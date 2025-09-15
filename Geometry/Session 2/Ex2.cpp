/* Ex2. The rectangle no2
- Input
5
- Output
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=5; j++) cout << i+j-1 << " ";
        cout << endl;
    }
    return 0;
}