/*Bài 19. Hình thoi 3
- Input
5
- Output
**********
****~~****
***~~~~***
**~~~~~~**
*~~~~~~~~*
**~~~~~~**
***~~~~***
****~~****
**********
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1; i<n*2; i++) {
        if(i==1 || i==n*2-1) {
            for(int j=1; j<=n*2; j++) cout << "*";
            cout << endl;
        }
        else if(i<=n) {
            for(int j=1; j<=n*2; j++) {
                if(j>n-i+1 && j<=n-1+i) cout << "~";
                else cout << "*";
            }
            cout << endl;
        }
        else {
            for(int j=1; j<=n*2; j++) {
                int temp = abs(n-i)+1;
                if(j>temp && j<=n*2-temp) cout << "~";
                else cout << "*"; 
            }
            cout << endl;
        }
    }
    return 0;
}