/* Ex12. The char triangle 4
Input               Output
4                   CDEF
                    BCD
                    AB
                    @
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=n; i>0; i--) {
        char x='A'+i-2;
        for(int j=1; j<=i; j++) {
            cout << x++;
        }
        cout << endl;
    }

    return 0;
}