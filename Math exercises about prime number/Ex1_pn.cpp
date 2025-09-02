/*Excercise 1:
Check the prime number.
- Input: Integer n (0<=n<=10^9)
- Output: Print YES if n is prime number. In contrast, print NO.*/

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
        if(n<0 || n>pow(10,9)) cout << "Enter n again!" << "\n";
    } while(n<0 || n>pow(10,9));

    if(prime(n)) cout << "YES";
    else cout << "NO";
    
    return 0;
}
