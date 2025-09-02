/*  Ex1: Phan tich 1
Hay phan tich mot so nguyen duong n thanh thua so nguyen to.

Input:
- So nguyen duong n (1<=n<=10^9).
Output:
- Cach phan tich thua so nguyen to cua n. Ban hay thu cai dat voi 5 cach in thua so
nguyen to sau.
 
 Vi du cach phan tich 1.
 Input          Output
 28             2 2 7

 Vi du cach phan tich 2 
 (moi thua so nguyen to chi liet ke 1 lan).
 Input          Output
 28             2 7

 Vi du cach phan tich 3: 
 thua so nguyen to duoc liet ke kem theo so mu
 Input          Output
 28             2(2) 7(1)

 Vi du cach phan tich 4: 
 them dau x vao giua cac thua so nguyen to
 Input          Output
 8              2x2x2
 28             2x2x7

 Vi du cach phan tich 5
 Input          Output
 60             60=2^2 * 3^1 * 5^1
*/
#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

int prime(ll n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

void analys1(ll n) {
    for(int i=2; i<=n/2; i++) {
        if(prime(i)) {
            while(n%i==0) {
                cout << i << " ";
                n/=i;
            }
        }
    }
    if(n>0) cout << n << endl;
}

int main() {
    ll n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while(n<1 || n>pow(10,9));
    analys1(n);

    return 0;
}



/*int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    // Enter n
    long long n;
    do {
        cout << "Enter n: ";
        cin >> n;
        if(n<1 || n>1e9) cout << "Enter n again!\n";
    } while(n<1 || n>1e9);

    // Case 1:
    cout << "Case 1: ";
    // Find factors
    int a=n;
    for(int i=2; i<=n; i++) {
        if(prime(i)) {
            while(a%i==0) {
                cout << i << " ";
                a/=i;
            }
        }
    }
    cout << "\n";

    // Case 2:
    cout << "Case 2: ";
    // Find factor
    int b=n;
    for(int i=2; i<=n; i++) {
        if(prime(i) && n%i==0) {
            cout << i << " ";
            while(b%i==0) b/=i;
        }
    }
    cout << "\n";

    //Case 3:
    cout << "Case 3: ";
    // Find factor
    int c=n;
    for(int i=2; i<=n; i++) {
        if(prime(i) && c%i==0) {
            int count=0;
            while(c%i==0) {
                count++;
                c/=i;
            }
            // Pritnt factors
            cout << i << "(" << count << ")" << " ";
        }
        
    }
    cout << "\n";

    // Case 4:
    cout << "Case 4: ";
    // Find factors
    int d=n;
    for(int i=2; i<=n; i++) {
        if(prime(i) && d%i==0) {
            while(d%i==0) {
                cout << i;
                d/=i;
                if(d!=1) cout << "x";
            }
        }
    }  
    cout << "\n";
    
    // Case 5:
    cout << "Case 5: ";
    // Find factors
    int e=n;
    for(int i=2; i<=n; i++) {
        int count=0;
        if(prime(i) && e%i==0) {
            while(e%i==0) {
                ++count;
                e/=i;
            }
            // Print i with times of i appeared
            cout << i << "^" << count;
            if(e!=1) cout << " * ";
        }
        
    }
    return 0; 
}*/