/*Ex1: Định nghĩa kiểu cấu trúc phân số gồm tử số và mẫu số
Thực hiện cài đặt các chức năng sau
- Cài đặt các phép toán cộng, trừ , nhân, chia 2 phân số.
- In ra kết quả các phép toán kể trên dưới dạng phân số tối giản
*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

typedef struct phanso {
    int tu;
    int mau;
} ps;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while(b!=0) {
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int lcm(int a, int b) {
    return a*b/gcd(a,b);
}

ps simp(ps a) {
    ps c;
    c.tu = a.tu/gcd(a.tu,a.mau);
    c.mau = a.mau/gcd(a.tu,a.mau);
    return c;
}

ps total(ps a, ps b) {
    ps c;
    c.tu = a.tu*b.mau + a.mau*b.mau;
    c.mau = a.mau*b.mau;
    return simp(c);
}

ps minus(ps a, ps b) {
    ps c;
    c.tu = a.tu*b.mau - a.mau*b.tu;
    c.mau = a.mau*b.mau;
    return simp(c);
}

ps div(ps a, ps b) {
    ps c;
    c.tu = a.tu*b.mau;
    c.mau = a.mau*b.tu;
    return simp(c);
}

void pr(ps a) {
    cout << "Phan so sau khi rut gon: ";
    cout << a.tu << "/" << a.mau << endl;
}



int main() {
    ps a,b,c;
    cout << "Enter a: ";
    cin >> a.tu >> a.mau;
    a = simp(a);
    pr(a);
    cout << "Enter b: ";
    cin >> b.tu >> b.mau;
    b = simp(b);
    pr(b);
    c = total(a,b);
    cout << "Plus: " << c.tu << "/" << c.mau << endl;
    c = div(a,b);
    cout << "Divide: " << c.tu << "/" << c.mau << endl;
    return 0;
}