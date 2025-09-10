/* Ex4. The rectangle 4
Input               Output
4 4                 4321
                    3212
                    2123
                    1234
--------------------------
4 6                 654321
                    543212
                    432123
                    321234
--------------------------
6 4                 6543
                    5432
                    4321
                    3212
                    2123
                    1234
*/
#include <iostream>
using namespace std;

int max(int a, int b) {
    return a>b?a:b;
}

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;

    for(int i=1; i<=a; i++) {
        int init=max(a,b)-i+1;
        for(int j=1; j<=b; j++) {
            if(j>=max(a,b)-i+1) cout << init++;
            else cout << init--;
        }
        cout << endl;
    }
    return 0;
}