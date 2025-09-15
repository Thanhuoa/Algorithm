/* Bài 15. Hình bình hành
- Input
4 5
- Output
*****
~*****
~~*****
~~~*****
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b+i-1; j++) {
            if(j<=i-1) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }

    return 0;
}