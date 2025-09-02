/* Ex11: T-prime 2
Cho so tu nhien N. Nhiem vu cua ban la hay dem tat ca cac so co dung ba uoc so.
Vi du n=100, ta co cac so 4.

Input:
- Dong dau tien dua vao so luong test T.
- Nhung dong ke tiep dua vao cac bo test. Moi bo test la mot so N.
- T, N thoa man rang buoc 1<=T<=100, 1<=N<=10^12
Output:
- Dua ra ket qua moi test theo tung dong.

Ex:
Input                           Output
2                               
50                              4
200                             6
*/

#include <iostream>
#include <math.h>
using namespace std;

int prime[100000001];

int sieve() {
    for(int i=2; i<=100000000; i++) prime[i]=1;
    prime[0]=prime[1]=0;
    
    for(int i=2; i<=sqrt(100000000); i++) {
        if(prime[i]) {
            for(int j=i*i; j<=100000000; j+=i) prime[j]=0;
        }
    }
}

int main() {
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter T again!\n";
    } while(t<1 || t>100);

    sieve();
    while(t--) {
        // Enter value of N
        long long n;
        do {
            cout << "Enter N: ";
            cin >> n;
            if(n<1 || n>pow(10,12)) cout << "Enter N again!\n";
        }   while(n<1 || n>pow(10,12));

        // Count the number of available case
        int count=0;
        for(int i=0; i<=sqrt(n); i++) {
            if(prime[i]) ++count; 
        }
        // Print the value of count
        cout << count << "\n";
    }
    return 0;
}


// Another way:
/*int prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    // Enter value of T
    int t;
    do {
        cout << "Enter T: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter T again!\n";
    } while(t<1 || t>100);

    while(t--) {
        // Enter value of N
        long long n;
        do {
            cout << "Enter N: ";
            cin >> n;
            if(n<1 || n>pow(10,12)) cout << "Enter N again!\n";
        }   while(n<1 || n>pow(10,12));

        // Count the number of available case
        int count=0;
        for(int i=0; i<=sqrt(n); i++) {
            if(prime(i)) count++; 
        }

        // Print the counted number
        cout << " --> " << count << "\n";
    }

    return 0;
}*/