/* Ex9. The char triangle 1
Input           Output
4               a
                c b
                d e f
                j i h g

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char x='a';
    cout << x << endl;
    for(int i=2; i<=n; i++) {
        x+=i;
        for(int j=1; j<=i; j++) {
            if(i%2==0) {
                cout << x << ' ';
                if(j<=i) x--;
            }
            else {
                cout << x << ' ';
                if(j<i) x++;
            }
        }
        cout << endl;
    }

    return 0;
}