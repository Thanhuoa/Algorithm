/* Bài 18. Thuận nghịch và lộc phát.
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một
chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt
kê trong một đoạn giữa hai số nguyên trước có bao nhiêu số đẹp như vậy.

Ví dụ
Input                   Output
1 500                   1 (161)
*/
#include <iostream>
#include <math.h>
using namespace std;

int reciptoral(int n) {
    int rev=0, temp=n;
    while(temp>0) {
        rev=rev*10+temp%10;
        temp/=10;
    }
    return rev==n;
}

int lp(int n) {
    int temp=n, dre=-1;
    int sum=0;
    while(temp>0) {
        if(temp%10==6) dre=1;
        sum+=temp%10;
        temp/=10;
    }
    if(dre==-1) return 0;
    return sum%10==8;
}

int main() {
    int a,b;
    cout << "Enter [a;b]: ";
    cin >> a >> b;
    
    int cnt=0;
    for(int i=a; i<=b; i++) {
        if(lp(i)==1 && reciptoral(i)==1) cnt++;
    }
    cout << cnt;
    return 0;
}