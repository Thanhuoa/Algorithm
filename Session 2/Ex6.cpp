/*Ex6. The rectangle 6
- Input
4
- Output
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
// Instruction: Find the distance between one element with other edges
// around the rectangle
#include <iostream>
using namespace std;

int min(int a, int b) {
    if(a>b) return b;
    else return a;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i=1; i<=2*n-1; i++) {
        for(int j=1; j<=2*n-1; j++) {
            int min_dis = min(min(i-1,2*n-1-i), min(2*n-1-j,j-1));
            cout << n-min_dis << " ";
        }
        cout << endl;
    }

    return 0;
}