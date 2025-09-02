/* Ex2: Phan tich 2 (Su dung sang so nguyen to bien doi)
Hay phan tich mot so nguyen duong thanh tich cac thua so nguyen to.

Input:
- Dong dau tien ghi so bo test.
- Moi bo test viet tren mot dong so nguyen duong n khong qua 5 chu so.
Output:
- Moi bo test viet ra thu tu bo test, sau do lan luot la cac so nguyen to khac nhau co
trong tich, voi moi so viet them so luong so do. Xem vi du de hieu ro hon ve cach
viet ket qua.

Ex:
Input           Output
3
60              2(2) 3(1) 5(1)
128             2(7)
10000           2(4) 5(4)
*/

#include <iostream>
#include <math.h>
using namespace std;

int prime[100001];

void sieve() {
    for(int i=1; i<=100000; i++) {
        prime[i]=i;
    }
    for(int i=2; i<=sqrt(100000); i++) {
        if(prime[i]) {
            for(int j=i*i; j<=100000; j+=i) {   
                if(prime[j]==j) prime[j]=i;    // Tim thua so nguyen to nho nhat trong cac gia tri j. VD: 12 co thua so nho nhat la 2
            }
        }
    }
}

void pt(int n) {
    while(n!=1) {
        int cnt=0;
        int tmp=prime[n]; // Thua so nguyen to nho nhat hien tai cua n
        while(n%tmp==0) {
            ++cnt;
            n/=tmp;
        }
        cout << tmp << "(" << cnt << ")" << " ";
    }
    cout << "\n";
}

int main() {
    sieve();
    // Enter t
    int t;
    cout << "Enter t: ";
    cin >> t;
    
    while(t--) {
        // Enter n
        int n;
        cout << "Enter n: ";
        cin >> n;
        pt(n);
    }
    return 0;
}


/*int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    // Enter t
    int t;
    cout << "Enter t: ";
    cin >> t;

    while(t--) {
        // Enter n
        long long n;
        do {
            cout << "Enter n: ";
            cin >> n;
            if(n<0 || n>100000) cout << "Enter n again!\n";
        } while(n<0 || n>100000);
        
        // Find factors
        int a=n;
        for(int i=2; i<=60; i++) {
            int count=0;
            if(prime(i) && a%i==0) {
                while(a%i==0) {
                    count++;
                    a/=i;
                }
                // Print i
                cout << i << "(" << count << ")" << " ";
            } 
        }
        cout << endl;
    }
    return 0;
}*/