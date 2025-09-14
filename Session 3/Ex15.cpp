/* Ex15. The char triangle 7
Input               Output
5                   A
                    A B A
                    A B C B A
                    A B C D C B A
                    A B C D E D C B A
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++ ){
        char x='A';
        for(int j=1; j<=2*i-1; j++) {
            if(j<i) cout << x++ << ' ';
            else cout << x-- << ' ';
        }
        cout << endl;
    }
    
    return 0;
}