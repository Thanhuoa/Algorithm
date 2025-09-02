/*  Bài 27. Chữ số nguyên tố 2
Liệt kê số lần xuất hiện của chữ số nguyên tố của 1 số theo thứ
tự xuất hiện các chữ số.
- Input
Số nguyên dương n (1<=n<=10^18)
- Output
Chữ số nguyên tố xuất hiện trong số ban đầu cùng với số lần xuất hiện của nó
theo thứ tự xuất hiện

Ví dụ
Input                               Output
722334123232277                     7 3
                                    2 6
                                    3 4
                        
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
    ll temp=n;
    while(temp) {
        if(prime(temp%10)) a[temp%10]++;
        temp/=10;
    }
    
    temp=n;
    ll rev=0;
    while(temp) {
        rev=rev*10+temp%10;
        temp/=10;
    }

    while(rev) {
        if(prime(rev%10) && a[rev%10]>0) {
            cout << rev%10 << " " << a[rev%10] << endl;
            a[rev%10]=0;
        } 
        rev/=10;
    }
    return 0;
}