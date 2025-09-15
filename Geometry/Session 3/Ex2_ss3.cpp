/* Ex2. The rectangle 2
Input                   Output
4 4                     1234
                        2343
                        3432
                        4321
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
        cout << i;
        for(int j=1; j<b; j++) {
            if(j<=b-i) {
                cout << i+j;
            }
            else {
                int init=max(b-1,i-1);
                while(j<b) {
                    cout << init--;
                    ++j;
                }
            }
        }
        cout << "\n" << "\n";
    }

    return 0;
}