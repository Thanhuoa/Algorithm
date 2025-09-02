/* Bài 22. Chữ số cuối cùng lớn nhất
Viết chương trình C cho phép nhập vào n và liệt kê các số nguyên tố thoả
mãn nhỏ hơn n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy.

Ví dụ
Input               Output
200                 2 3 5 7 11 13 17 19 23 29 37 47 59 67
                    79 89 101 103 107 109 113 127 137
                    139 149 157 167 179 199 
                    29
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

int largest_last(int n) {
    int last=n%10;
    while(n) {
        if(last<n%10) return 0;
        n/=10;
    }
    return 1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int cnt=0;
    for(int i=2; i<n; i++) {
        if(prime(i)==1 && largest_last(i)==1) {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl;
    cout << cnt;
    return 0;
}