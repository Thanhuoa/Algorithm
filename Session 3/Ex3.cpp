/* Ex3. The rectangular 3
Input                   Output
4 4                     1234
                        2123
                        3212
                        4321
----------------------------
4 6                     123456
                        212345
                        321234
                        432123
----------------------------
6 4                     1234
                        2123
                        3212
                        4321
                        5432
                        6543
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;

    for(int i=1; i<=a; i++) {
        int init=i;
        for(int j=1; j<=b; j++) {
            if(j>=i) cout << init++;
            else cout << init--;
        }
        cout << endl;
    }

    return 0;
}