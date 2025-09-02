/* Bài 20. Số Armstrong
Số armstrong là số A có n chữ số và thoả mãn tổng của luỹ thừa bậc n của
từng chữ số trong A bằng chính nó.
Ví dụ: 371=3^3 + 7^3 + 1^3
Viết chương trình C kiểm tra một số xem có phải là số armstrong hay không. Nếu
đúng in ra 1, sai in ra 0.

Ví dụ
Input                   Output
371                     1
24                      0
*/
#include <iostream>
#include <math.h>
using namespace std;

int check(int n) {
    int cnt=0, temp=n;
    while(temp) {
        cnt++;
        temp/=10;
    }

    int sum=0;
    temp=n;
    while(temp) {
        sum+=pow(temp%10,cnt);
        temp/=10;
    }
    return sum==n;
}

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    cout << check(a);
    return 0;
}