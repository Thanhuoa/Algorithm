/* Bài 25. Thừa số nguyên tố thứ k
Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên
dương n.
Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7
- Input
2 số n,k (1<=n,k<=10^9).
- Output
In ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của n, trường hợp không
tồn tại in -1.

Ví dụ
Input               Output
28 3                7
8 5                 -1
60 3                3
*/
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    int n,k;
    do {
        cout << "Enter n,k: ";
        cin >> n >> k;
    } while((n<1 || n>pow(10,9)) || (k<1 || k>pow(10,9)));

    int sign, cnt=0;
    int temp=n;
    for(int i=2; i<=n/2; i++) {
        if(prime(i)==1 && n%i==0) {
            while(temp%i==0) {
                cnt++;
                if(cnt==k) sign=i;
                temp/=i;
            }
        }
    }
    if(cnt>k) cout << sign;
    else cout << -1;
    return 0;
}