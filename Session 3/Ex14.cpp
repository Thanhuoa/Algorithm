/* Ex14. The char triangle 6
Input               Output
5                   a
                    B c
                    D e F
                    g H i J
                    k L m N o
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char x='a';
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(islower(x)) {
                cout << x << ' ';
                x-=31;
            } 
            else {
                cout << x << ' ';
                x+=33;
            }
        }
        cout << endl;
    }
    return 0;
}