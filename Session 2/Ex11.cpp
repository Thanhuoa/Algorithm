/* Ex11. The triangular 3
- Input
5
- Output
~~~~2
~~~242
~~24642
~2468642
2468108642
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        int cnt=2;
        for(int j=1; j<=n+i-1; j++) {
            if(j<=n-i) cout << "~";
            else {
                cout << cnt;
                if(j>=n) cnt-=2;
                else cnt+=2;
            } 
        }   
        cout << endl;
    }
    return 0;
}