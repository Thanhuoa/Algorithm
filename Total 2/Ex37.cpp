/* Bài 37. Prime substraction
Bạn được cung cấp hai số nguyên x và y (đảm bảo rằng x>y). 
Bạn có thể chọn bất kỳ số nguyên tố p nào và trừ nó bất kỳ số lần nào từ x. Có thể làm x bằng y?
Hãy nhớ rằng một số nguyên tố là một số nguyên dương có chính xác hai ước số dương: 1 và chính nó.
Chuỗi các số nguyên tố bắt đầu bằng 2,3,5,7,11.
Chương trình của bạn nên giải quyết các trường hợp kiểm tra độc lập.
- Input
Dòng đầu tiên chứa một số nguyên t (1<=t<=1000) - số lượng trường hợp kiểm tra.
Sau đó t dòng tiếp theo, mỗi dòng mô tả một trường hợp thử nghiệm. Mỗi dòng chứa hai số nguyên x và y (1<=y<=x<=10^8).
- Output
Đối với mỗi trường hợp kiểm tra, hãy in YES nếu có thể chọn số nguyên tố p và trừ
nó bất kỳ số lần nào từ x để x trở thành y. Nếu không, in NO.
Bạn có thể in mọi chữ cái trong mọi trường hợp bạn muỗn (ví dụ: các chuỗi yEs, yes, Yes và YES
đều sẽ được công nhận là câu trả lời hợp lệ).

Ví dụ
Input                               Output
4
100 98                              YES
42 32                               YES
1000000000000000000 1               YES
41 40                               NO
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

int cal(ll x, ll y) {
    ll minus=x-y;
    for(int i=2; i<=sqrt(minus); i++) {
        if(prime(i)==1 && minus%i==0) return 1;
    }
    return prime(minus);
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>1000);

    while(t--) {
        ll x,y;
        do {
            cout << "Enter x,y: ";
            cin >> x >> y;
        } while(x<1 || x>pow(10,8) || x<y || y<1 || y>pow(10,8));
        if(cal(x,y)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}