/* Thuận nghịch và không chứa số 9
Viết chương trình C cho phép nhập vào số N, thực hiện liệt kê các số thuận nghịch
lớn hơn 1 và nhỏ hơn N thoả mãn không chứa chữ số 9. Có bao nhiêu số như vậy

Ví dụ
Input               Output
100                 2 3 4 5 6 7 8 11 22 33 44 55 66 77 88
                    15
*/
#include <iostream>
#include <math.h>
using namespace std;

int tn(int n) {
    int temp=n, sum=0;
    while(temp) {
        sum=sum*10+temp%10;
        temp/=10;
    }
    return sum==n;
}

int check_non9(int n) {
    while(n) {
        if(n%10==9) return 0;
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
        if(tn(i)==1 && check_non9(i)==1) cnt++;
    }
    cout << cnt;
    return 0;
}