/* Ex6. The char rectangle 2
Input           Output
4 4             @ABC
                ABCC
                BCCC
                CCCC

3 5             @ABCD
                ABCDD
                BCDDD
                
5 3             @AB
                ABB
                BBB
                BBB
                BBB
*/ 
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;

    for(int i=1; i<=a; i++) {
        char x='@'+i-1;
        for(int j=1; j<=b; j++) {
            if(j<=b-i) cout << x++;
            else cout << x;
        }
        cout << endl;
    }
    
    return 0;
}