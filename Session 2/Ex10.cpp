/* Ex10. The triangular 2
- Input
5
- Output
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        int init = i;
        int cnt = n-1;
        for(int j=1; j<=i; j++) {
            cout << init << " ";
            init += cnt;
            cnt--;
        }
        cout << endl;
    }

    return 0;
}