/* Bài 15. Đếm chữ số chẵn, lẻ
Nhập một số nguyên dương N không quá 9 chữ số. Hãy đếm xem N có bao 
nhiêu chữ số lẻ và bao nhiêu chữ số chẵn. Nếu không tồn tại số lẻ hoặc số chẵn thì
in ra kết quả là 0 cho loại số tương ứng.

Ví dụ
Input                   Output
12345678                4 4
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter N: ";
        cin >> n;
        if(999999999-n<0) cout << "Enter n again!\n";
    } while(999999999-n<0);

    int cnt1=0, cnt2=0;
    while(n>0) {
        int temp=n%10;
        if(temp%2==0) cnt2++;
        else cnt1++;
        n/=10;
    }
    cout << cnt1 << " " << cnt2;

    return 0;
}