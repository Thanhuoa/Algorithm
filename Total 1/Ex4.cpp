/* Ex3: Dem so luong chinh phuong trong doan,
Dem so luong cac so chinh phuong trong doan tu a toi b.

Input:
- Dong dau tien la so luong test case T (1<=n<=100).
- T dong tiep theo moi dong la 2 so nguyen duong a,b (1<=a<=b<=10^6).
Output:
- Moi test case in ra tren 1 dong.

Ex:
Input       Output
2
1 50        7
10 20       1
*/
#include <iostream>
#include <math.h>
using namespace std;

int isSquareNumber(int n) {
	if(n==1) return 1;
	else {
		int check=sqrt(n);
		if(check*check==n) return 1;
	}
	return 0;
}

int main() {
    // Find t
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter t again!\n";
    } while(t<1 || t>100);

    while(t--) {
        // Find [a;b]
        int a,b;
        do {
            cout << "Enter [a;b]: ";
            cin >> a >> b;
            if(a+b<=1 || a>b || a>pow(10,6) || b>pow(10,6)) cout << "Enter [a;b] again!\n";
        } while(a+b<=1 || a>b || a>pow(10,6) || b>pow(10,6));
        
        int count=0;
        for(int i=a; i<=b; i++) {
        	if(isSquareNumber(i)) count++;
		}
		cout << count << endl;
    } 
    return 0;
}
