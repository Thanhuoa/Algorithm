/* Ex13. The char triangle 5
Input               Output
4                   A
                    B A B
                    C B A B C
                    D C B A B C D
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char x='A';
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i*2-1; j++) {
            if(j<i) cout << x-- << ' ';
            else cout << x++ << ' ';
        }
        cout << endl;
    }

    return 0;
}