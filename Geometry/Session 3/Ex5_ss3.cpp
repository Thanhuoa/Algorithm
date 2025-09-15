/* Ex5. The char rectangle 1
Input                   Output
4 4                     DDDD
                        CDDD
                        BCDD
                        ABCD
----------------------------
3 5                     CDEEE
                        BCDEE
                        ABCDE
-----------------------------
5 3                     CCC
                        CCC
                        CCC
                        BCC
                        ABC
*/
#include <iostream>
#include <string.h>
using namespace std;

int min(int a, int b) {
    return a<b?a:b;
}

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;

    for(int i=a; i>0; i--) {
        char x='A'+min(i,b)-1;
        for(int j=1; j<=b; j++) {
            if(j<=b-i) cout << x++;
            else cout << x;
        }
        cout << endl;
    }

    return 0;
}