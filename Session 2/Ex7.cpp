/* Ex7. The rectangle 7
- Input
5
- Output
5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        int init = n;
        for(int j=1; j<=n; j++) {
            if(j<i) cout << init-- << " ";
            else cout << init << " ";
        }
        cout << endl;
    }
    return 0;
}