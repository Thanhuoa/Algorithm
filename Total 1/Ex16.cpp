/* Bài 16. Số Strong
Viết chương trình cho phép nhập vào hai số nguyên dương và tìm tất cả các 
số Strong (là số có tổng giai thừa các chữ số bằng chính nó) nằm trong khoảng đó
(nếu không tồn tại số nào thì in ra 0)

Ví dụ
Input               Output
1 1000              1 2 145
*/
#include <iostream>
#include <math.h>
using namespace std;

int gt(int n) {
    int solve=1;
    for(int i=1; i<=n; i++) solve*=i;
    return solve;
}

int check(int n) {
    int temp=n, sum=0;
    while(temp>0) {
        sum+=gt(temp%10);
        temp/=10;
    }
    if(sum==n) return 1;
    return 0;
}

int main() {
    int a,b;
    cout << "Enter [a;b]: ";
    cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++) {
        if(check(i)) {
            cout << i << " ";
            cnt++;
        }
    }
    if(cnt==0) cout << 0;
    return 0;
}