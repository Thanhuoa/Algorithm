/* Bài 4. Hình chữ nhật 4
- Input
4 5
- Output
*****
*~~~*
*~~~*
*****
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a,b: ";
    cin >> a >> b;
    for(int i=0; i<a; i++) {
        if(i==0 || i==a-1) {
            for(int j=0; j<b; j++) cout << "*";
            cout << endl;
        }
        else {
            for(int j=0; j<b; j++) {
                if(j==0 || j==b-1) cout << "*";
                else cout << "~";
            }
            cout << endl;
        }
    }

    return 0;
}