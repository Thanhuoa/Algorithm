/* Ex11. The char triangle 3
Input               Output
4                   ACEG
                    CEG
                    EG
                    G
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char x='A';
    for(int i=4; i>0; i--) {
        char tmp=x;
        for(int j=1; j<=i; j++) {
            cout << tmp;
            tmp+=2;
        }
        cout << endl;
        x+=2;
    }
    
    return 0;
}