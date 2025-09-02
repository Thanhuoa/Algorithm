/* Bài 24. Phi hàm Euler
Đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n.
- Input
Số nguyên duy nhất n (1<=n<=10^16).
- Output
Kết quả của bài toán.
- Ví dụ
Đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n.
Input
Số nguyên duy nhất n (1<=n<=10^16)
Output
Kết quả của bài toán

Ví dụ
Input                   Output
9                       6
1000000000000000        4000000000000000
*/
#include <iostream>
#include <math.h>
using namespace std;

int check(int a, int b) {
    while(b!=0) {
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main() {
    int n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(n<1 || n>pow(10,16));

    int cnt=0;
    for(int i=1; i<n; i++) {
        if(check(i,n)==1) cnt++;
    }
    cout << cnt;

    return 0;
}