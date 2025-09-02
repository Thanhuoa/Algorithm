/* Bài 36. Orac đang nghiên cứu lý thuyết số, và ông quan tâm đến các tính chất của ước số.
Đối với hai số nguyên dương a và b, a là ước của b khi và chỉ khi tồn tại số nguyên c, sao cho a.c=b
Với n>=2, chúng ta sẽ biểu thị là f(n) ước số dương nhỏ nhất của n, ngoại trừ 1.
Ví dụ: f(7)=7, f(10)=2, f(35)=5
Đối với số nguyên n cố định, Orac quyết định thêm f(n) vào n.
Ví dụ: nếu anh ta có số nguyên n=5, giá trị mới của n sẽ bằng 10. Và nếu anh ta có  số nguyên n=6, n sẽ được thay đổi thành 8.
Orac yêu nó rất nhiều, vì vậy anh quyết định lặp lại thao tác này nhiều lần.
Bây giờ, với hai số nguyên dương n và k, Orac sẽ yêu cầu bạn thêm f(n) vào n chính xác k lần (lưu ý rằng n sẽ thay đổi sau mỗi thao tác,
 vì vậy f(n) cũng có thể thay đổi) và cho anh ta biết giá trị cuối cùng của n.
Ví dụ: nếu Orac cho bạn n=5 và k=2, lúc đầu, bạn nên thêm f(5)=5 thành n=5,
vì vậy giá trị mới của n sẽ bằng n=10, sau đó, bạn thêm f(10)=2 đến 10, vì vậy giá trị mới (và cuối cùng!) của bạn sẽ bằng 12.
Orac có thể hỏi bạn những truy vấn này nhiều lần.
- Input
Dòng đầu tiên của đầu vào là một số nguyên t (1<=t<=100): số lần mà Orac sẽ hỏi bạn.
Mỗi dòng t tiếp theo chứa hai số nguyên dương n,k (2<=n<=10^6, 1<=k<10^9), tương ứng với truy vấn của Orac.
Nó được đảm bảo rằng tổng số của n tối đa là 10^6.
- Output
In ra các dòng t, i-th của chúng nên chứa giá trị cuối cùng của n trong truy vấn thứ i của Orac.

Ví dụ
Input                       Output
3
5 1                         10
8 2                         12
3 4                         12
*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int f(ll n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return i;
    }
    if(n>1) return n;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>100);

    while(t--) {
        ll n,k;
        do {
            cout << "Enter n,k: ";
            cin >> n >> k;
        } while(n<2 || n>pow(10,6) || k<1 || k>pow(10,9));
        while(k--) n+=f(n);
        cout << n << endl; 
        
    }

    return 0;
}