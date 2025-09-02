/* Bài 13. Số đẹp
Một số được coi là đẹp nếu nó là số nguyên tố và tổng chữ số là một số trong
dãy Fibonaci. Viết chương trình liệt kê trong một đoạn giữa hai số nguyên cho trước
có bao nhiêu số đẹp như vậy.
- Input: Dòng duy nhất là 2 số nguyen dương a,b (1<=a<=b<=10^9).
- Output: In ra các số đẹp trong đoạn từ a tới b. Trong trường hợp không tồn tại số đẹp trong 
đoạn từ a tới b thì in ra -1

Ví dụ
Input           Output
2 50            2 3 5 11 17 23 41
24 30           -1
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

int fibo(int n) {
    if(n==1 || n==0) return 1;
    return fibo(n-1)+fibo(n-2);
}

int total_is_fibo(int sum) {
    for(int i=0; i<=sum; i++) {
        if(sum==fibo(i)) return 1;
    }
    return 0;
}

int main() {
    int a,b;
    do {
        cout << "Enter a,b: ";
        cin >> a >> b;
        if((a<1 || a>pow(10,9)) || (b<a) || (b<1 && b>pow(10,9))) cout << "Enter again!\n";
    } while((a<1 || a>pow(10,9)) || (b<a) || (b<1 && b>pow(10,9)));
    
    int dre=0;
    for(int i=a; i<=b; i++) {
        int temp=i, sum=0;
        while(temp) {
            sum+=temp%10;
            temp/=10;
        }
        if(prime(i) && total_is_fibo(sum)) {
            dre++;
            cout << i << " ";
        }
    }
    if(dre==0) cout << -1 << endl;

    return 0;
}