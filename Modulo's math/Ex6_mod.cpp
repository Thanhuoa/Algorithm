/* Bài 6. 
Bạn được cho hai số nguyên dương a và b.
Trong một lần di chuyển, bạn có thể tăng a thêm 1 (thay thế bằng +1).
Nhiệm vụ của bạn là tìm ra số lần di chuyển tối thiểu bạn cần thực hiện để chia hết cho b.
Có thể, bạn phải thực hiện 0 di chuyển, vì a đã chia hết cho b.
Bạn phải trả lời t trường hợp kiểm tra độc lập.
- Input
Dòng đầu tiên của đầu vào chứa một số nguyên t (1<=t<=10^4) - số lượng trường hợp kiểm tra.
Sau đó t kiểm tra trường hợp theo.
Dòng duy nhất của trường hợp thử nghiệm chứa hai số nguyên a và b (1<=a,b<=10^9).
- Output
Đối với mỗi trường hợp kiểm tra, hãy in câu trả lời - số lần di chuyển tối thiểu bạn cần
thực hiện để chia hết cho b.

Construction: a = x*b + r but in this question we have a = x*b + r + y so we must find y

Ví dụ
Input                  Output
5
10 4                    2
13 9                    5
100 13                  4
123 456                 333
92 46                   0
*/
#include<iostream>
#include<math.h>
using namespace std;

#define ll long long

int solve(ll a, ll b) {
    if(a%b==0) return 0;
    int r=a%b, y=b-r;
    return y;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>pow(10,4));

    while(t--) {
        ll a,b;
        do {
            cout << "Enter a,b: ";
            cin >> a >> b;
        } while(a*b<0 || a>pow(10,9) || b>pow(10,9));
        cout << solve(a,b) << endl;
    }

    return 0;
}