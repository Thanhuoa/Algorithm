/* bài 16. Hình chữ nhật 5
- Input
5 
- Output
~~~~*
~~~**
~~* *
~*  *
*****
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1 || i==2 || i==n) {
                if(j<=n-i) cout << "~";
                else cout << "*";
            }
            else {
                if(j<=n-i) cout << "~";
                else if(j==n-i+1 || j==n) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}