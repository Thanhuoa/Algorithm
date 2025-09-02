/* Ex11: Fibonacci
Day so Fibonacci duoc dinh nghia nhu sau: F0=0, F1=1, Fi=Fi-1 + Fi-2.
Cho so nguyen duong n, voi 2<=n<=92. Hay viet chuong trinh in ra n so Fibonacci
dau tien.

Input:
- So nguyen duong n (2<=n<=92).
Output:
- n so fibonacci dau tien, moi so duoc in cach nhau mot dau cach.

Ex:
Input           Output
5               0 1 1 2 3
*/
#include <iostream>
#include <math.h>
using namespace std;

int fib1(int n) {
    if(n==1 || n==0) return 1;
    return fib1(n-1)+fib1(n-2);
}

int main() {
    int n;
    do {
        cout << "Enter n: ";
        cin >> n;
        if(n<2 || n>92) cout << "Enter n again!\n";
    } while(n<2 || n>92);
    cout << fib1(n);

    return 0;
}