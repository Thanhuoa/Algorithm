/* Bài 26. Chữ số nguyên tố
Liệt kê số lần xuất hiện của chữ số nguyên tố của 1 số theo thứ tự 
từ nhỏ đến lớn.
- Input
Số nguyên dương n(1<=n<=10^18)
- Output
Chữ số nguyên tố xuất hiện trong số ban đầu cùng với số lần xuất hiện của nó.

Ví dụ
Input                                       Output
722334123232277                             2 6
                                            3 4
                                            7 3
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    ll n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(n<1 || n>pow(10,18));

    int a[9]={0};
    while(n) {
        int temp=n%10;
        if(prime(temp)) a[temp]++;
        n/=10;
    }
    for(int i=0; i<=9; i++) {
        if(a[i]>0) cout << i << " " << a[i] << endl;
    }
    return 0;
}