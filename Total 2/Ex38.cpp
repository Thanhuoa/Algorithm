/* Bài 38. Số cắt đôi
Với một vài số nguyên dương có 1 chữ số, khi cắt đôi số đó theo chiều ngang và lấy nửa
phía trên thì ta vẫn có một số nguyên. Cụ thể:
+ Số 0 cắt đôi vẫn ra số 0.
+ Số 1 cắt đôi vẫn ra số 1.
+ Số 8 cắt đôi ra số 0.
+ Số 9 cắt đôi ra số 0.
+ Các số khác cắt đôi sẽ không hợp lệ.
Cho một số nguyên dương không quá 18 chữ số. Hãy in ra kết quả "cắt đôi" của số đó.
Nếu không hợp lệ thì ghi ra INVALID. Chú ý: nếu cắt đôi ra một dãy toàn 0 thì cũng được coi
 là không hợp lệ. Kết quả cắt đôi thì không tính chữ số 0 ở đầu.
- Input
Dòng đầu ghi số bộ test. Mỗi bộ test ghi một số nguyên dương không quá 18 chữ số.
- Output
Ghi ra kết quả tính toán.
*/
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

int cal(ll n) {
    ll sum=0;
    while(n>0) {
        int temp=n%10;
        if(temp==0 || temp==8 || temp==9) sum=sum*10;
        else if(n==1) sum=sum*10+1;
        else return 0;
        n/=10;
    }
    return sum>0;
}

int main() {
    ll t;
    do {
        cout << "Enter t: ";
        cin >> t;
    } while(t<1 || t>1000);

    while(t--) {
        ll n;
        do {
            cout << "Enter n: ";
            cin >> n;
        } while(n<1 || n>pow(10,19)-1);
        if(cal(n)) cout << "VALID" << endl;
        else cout << "INVALID" << endl;
    }
    return 0;
}