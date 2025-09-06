/*Ex1. The rectangle 1
Input                                Output
4 4                                  1234
                                     2341
                                     3421
                                     4321
------------------------------------------
3 5                                  12345
                                     23451
                                     34521
------------------------------------------
6 4                                  1234
                                     2341
                                     3421
                                     4321
                                     5321
                                     6321


*/
#include <iostream>
#include <math.h>
using namespace std;

int min(int a, int b) {
    return a<b ? a : b;
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
                int init=min(i-1,b-1);
                while(j<b) {
                    cout << init--;
                    ++j;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
