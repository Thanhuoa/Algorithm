/* Ex8. The rectangle 8
- Input
5
- Output
1 2 3 4 5
2 1 2 3 4
3 2 1 2 3
4 3 2 1 2
5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        int cnt = i;
        for(int j=1; j<=n; j++) {
            if(j<i) cout << cnt-- << " ";
            else cout << cnt++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}