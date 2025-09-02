/*Ex10: T-prime
Cho so tu nhien N. Nhiem vu cua ban la hay liet ke tat ca cac so co dung ba uoc so.
Vi du: n=100, ta co cac so 4, 9, 25, 49
Input:
- Dong dau tien dua vao so luong test T
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so N.
- T, N thoa man rang buoc 1<=T<=100; 1<=N<=10^6
Output:
- Dua ra ket qua moi test theo tung dong.
Ex:
Input                           Output
2                               
50                              4 9 25 49
200                             4 9 25 49 121 169
*/
#include <iostream>
#include <math.h>
using namespace std;

// So co 3 uoc so la binh phuong cua 1 so nguyen to
int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter T agian!\n";
    } while(t<1 || t>100);

    while(t--) {
        int n;
        do {
            cout << "Enter N: ";
            cin >> n;
            if(n<1 || n>pow(10,6)) cout << "Enter N agian!\n";
        }   while(n<1 || n>pow(10,6));

        for(int i=2; i<=sqrt(n); i++) {
            if(prime(i)) cout << i*i << " ";
        }
    }

    
    return 0;
}



/*int check(int n) {
    int count=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            count++;
            if(count>3) return 0;
        }
    }
    if(count==3) return 1;
    else return 0;
}

int main() {
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter T agian!\n";
    } while(t<1 || t>100);

    while(t--) {
        int n;
        do {
            cout << "Enter N: ";
            cin >> n;
            if(n<1 || n>pow(10,6)) cout << "Enter N agian!\n";
        }   while(n<1 || n>pow(10,6));

        for(int i=0; i<=n; i++) {
            if(check(i)) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}*/