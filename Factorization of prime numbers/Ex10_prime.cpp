/* Ex10: Binh phuong nguyen to 2.
Mot so duoc goi la so dep khi neu no chia het cho mot so nguyen to nao do
thi cung chia ket cho binh phuong cua so nguyen to do. Viet chuong trinh liet ke
cac so dep nhu vay trong doan giua hai so nguyen duong cho truoc.

Input:
- 2 so nguyen duong a,b (1<=a<=b<=10^6).
Output:
- In ra cac so dep trong doan tu a toi b.

Ex:
Input       Output
1 50        4 8 9 16 25 27 32 36 49
*/
#include <iostream>
#include <math.h>
using namespace std;

int sodep(int n) {
	if(n==1) return 0;
    for(int i=2; i<=sqrt(n); i++){
    	int count=0;
    	while(n%i==0){
    		count++;
    		n/=i;
		}
		if(count==1) return 0;
	}
	if(n!=1) return 0;
	return 1;
}

int main() {
    // Find a,b
    int a,b;
    do {
        cout << "Enter a,b: ";
        cin >> a >> b;
        if(a+b<=1 || a>b || a>pow(10,6) || b>pow(10,6)) cout << "Enter a,b again!\n";
    } while(a+b<=1 || a>b || a>pow(10,6) || b>pow(10,6));

    for(int i=a; i<=b; i++) {
        if(sodep(i)) cout << i << ' ';
    }

    return 0;
}
