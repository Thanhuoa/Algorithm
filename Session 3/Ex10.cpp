/* Ex10. The triangle 2
Input               Output
5                   @
                    @B@
                    @BDB@
                    @BDFDB@
                    @BDFHFDB@                     
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int cnt=1;
    for(int i=1; i<=n; i++) {
        char x='@';
        for(int j=1; j<=cnt; j++) {
            while(j<i) {
                cout << x;
                x+=2;
                ++j;
            }
            cout << x;
            x-=2;
        }
        cout << endl;
        cnt+=2;
    }
    
    return 0;
}