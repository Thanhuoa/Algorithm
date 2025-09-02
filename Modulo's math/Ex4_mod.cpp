/* Fibonacci modulo
Dãy số Fibonacci được định nghĩa Fn=F(n-1)+F(n-2), n>1 và F0=0, F1=1.
Dưới đây là một số số Fibonacci: 0,1,1,2,3,5,8,13,21...
Nhiệm vụ của bạn là tìm số Fibonacci thứ n.
- Input
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test.
Mỗi bộ test là một số nguyên dương n.
T,n thoả mãn ràng buộc: 1<=T<=100; 1<=n<=1000.
- Output
Đưa ra kết quả mỗi test theo modulo 10^9+7 theo từng dòng.

Ví dụ
Input                   Output  
2
2                       1
5                       5
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int fibo(int n) {
    if(n==0||n==1) return n;
    int fn1=1, fn2=0, fn;
    for(int i=2; i<=n; i++) {
        fn = fn1+fn2;
        fn %= (int)(1e9+7);
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

int fib[1001];

void init() {
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=1000; i++) {
        fib[i] = fib[i-1]+fib[i-2];
        fib[i] %= (int)(1e9+7);
    }
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>100);

    while(t--) {
        int n;
        do {
            cout << "Enter n: ";
            cin >> n;
        } while(n<1 || n>1000);
        cout << fibo(n) << endl;
    }

    return 0;
}