/*Exercise 2
Find the prime number
- Input: n (0<=n<=10^6)
- Output: Print the line which has a number of primes and there are smaller than or equal to n
Ex: input: 13      
    output: 2 3 5 7 11 13       
*/

#include <iostream>
#include <math.h>
using namespace std;

int prime(int n) {
    for(int i=2; i<sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int main() {
    int n;
    do {
        cout << "Enter n: ";
        cin >> n;
        if(n<0 || n>pow(10,6)) cout << "Enter n again!" << "\n"; 
    } while(n<0 || n>pow(10,6));
    for(int i=0; i<=n; i++) {
        if(prime(i)) cout << i << " ";
    }
    return 0;
}
// Sàn số nguyên tố Eratosthenes (sieve)
/*
int prime[pow(10,6)+1];
int Prime(int n) {
    for(int i=2; i<sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}
void sieve() {
    // Coi tất cả các số từ 0 cho tới n là số nguyên tố
    // prime[i]=1
    // prime[i]=0
    for(int i=0; i<=pow(10,6); i++) 
        prime[i]=1;
    prime[0]=prime[1]=0;
    // Loại 0 và 1
    for(int i=2; i<=sqrt(pow(10,6)); i++) {
        // Nếu i là số nguyên tố
        if(Prime[i]) {
            // Duyệt tất cả các bội của i và cho nó không là số nguyên tố
            for(int j=i*i; j<=pow(10,6); j+=i) {
                prime[j]=0; // j không còn là số nguyên tố nữa
            }
        } 
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    for(int i=0; i<=n; i++) {
        if(prime[i]) cout << i;
    }
}

*/