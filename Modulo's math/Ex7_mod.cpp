/* Bài 7. Số nguyên dương thứ k không chia hết cho n
Bạn được cho hai số nguyên dương n và k.
In số nguyên dương thứ k không chia hết cho n.
Ví dụ: nếu n=3 và k=7, thì tất cả các số không chia hết cho 3 là
1,2,4,5,7,8,10,11,13. Số thứ 7 trong số đó là 10.
- Input [1 2 4 5\ 7 8 10\ 11 13 14] 
Dòng đầu tiên chứa số nguyên t (1<=t<=1000) - số lượng trường hợp kiểm tra trong đầu vào.
Tiếp theo, t trường hợp thử nghiệm được đưa ra, một trường hợp trên mỗi dòng.
Mỗi trường hợp thử nghiệm là hai số nguyên dương n (2<=n<=10^9) và k (1<=k<=10^9).
- Output
Đối với mỗi trường hợp thử nghiệm, in số nguyên dương thứ k không chia hết cho n.

Ví dụ
Input                               Output
6
3 7                                 10
4 12                                15
2 1000000000                        1999999999
7 97                                113
1000000000 100000000021             1
*/
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

ll solve(ll n, ll k) {
    int cnt=0, res=1;
    while(1) {
        if(res%n!=0) {
            cnt++;
            if(cnt==k) return res;
        }
        res++;
    }
}

ll solve2(ll n, ll k) {
    int x = k/(n-1);
    int r = k%(n-1);
    if(r==0) {
        return 1ll*x*n-1;
    }
    else return 1ll*n*x+r;
}

int main() {
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>1000);

    while(t--) {
        ll n,k;
        do {
            cout << "Enter n,k: ";
            cin >> n >> k;
        } while(n<2 || k<1 || n>pow(10,9) || k>pow(10,9)+1);
        cout << solve2(n,k) << endl;
    }

    return 0;
}