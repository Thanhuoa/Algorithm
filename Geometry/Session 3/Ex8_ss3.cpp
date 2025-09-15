/*Ex8. The char rectangle 4
Input               Output
5 5                 eeeee
                    edddd
                    edccc
                    edcbb
                    edcba

4 6                 ffffff
                    feeeee
                    fedddd
                    fedccc

6 4                 ffff
                    feee
                    fedd
                    fedc
                    fedc
                    fedc
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
        char x='a'+max(a,b)-1;
        for(int j=1; j<=b; j++) {
            if(j<=min(i,b)-1) cout << x--;
            else cout << x;
        }
        cout << endl;
    }

    return 0;
}