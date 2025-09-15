/* Ex7. The char rectangle 3
Input               Output
4 4                 ABCD
                    BCDA
                    CDBA
                    DCBA

3 5                 ABCDE
                    BCDEA
                    CDEBA

5 3                 ABC
                    BCA
                    CBA
                    CBA
                    CBA
*/
#include <iostream>
using namespace std;

int min(int a, int b) {
    return a<b?a:b;
}

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;

    for(int i=1; i<=a; i++) {
        char x='A'+min(i,b)-1;
        for(int j=1; j<=b; j++) {
            if(j<=b-i+1) {
                cout << x++;
                if(j==b-i+1) x='A'+i-2; 
            }
            else {
                cout << x;
                x--;
            }
        }
        cout << endl;
    }  
    return 0;
}