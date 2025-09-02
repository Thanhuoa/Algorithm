/* Bài 19. Tính giai thừa
Viết chương trình C cho phép nhập một số tự nhiên n và tính giai thừa của n.

Ví dụ
Input           Output
10              3628800
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int solve=1;
    for(int i=1; i<=n; i++) solve*=i;
    cout << solve;

    return 0;
}