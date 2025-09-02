/* Bài 9. Mod 5
Fedya học trong một phòng tập thể dục. 
Quê hương toán học của Fedya là để tính biểu thức sau: 
(1^n + 2^n + 3^n + 4^n) mod 5
cho giá trị đã cho của n. Fedya quản lý để hoàn thành nhiệm vụ.
Bạn có thể? Lưu ý rằng số n đã cho có thể cực kỳ lớn
(Ví dụ: nó có thể vượt quá mọi loại số nguyên của ngôn ngữ lập trình của bạn).
- Input
Dòng đơn chưa một số nguyên n (0<=n<=10^(10^5))
Số này không chưa bất kỳ số 0 hàng đầu nào.
- Output
In giá trị của biểu thức mà không có số 0 đứng đầu.

Ví dụ
Input                               Output
4                                   4
124356983594583453458888889         0
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

#define ll long long

int main() {
    string c;
    getline(cin,c);
    int r;
    if(c.size()==1) {
        r = (c[0]-'0')%4;
    }
    else {
        r = ((c[c.size()-2]-'0')*10+c[c.size()-1]-'0');
        r%=4;
    }
    if(r==0) cout << "4";
    else cout << "0";

    return 0;
}