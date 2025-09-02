/* Ex3: So chinh phuong trong doan.
In ra cac so chinh phuong trong doan tu a toi b.

Input:
- Dong dau tien la so luong test case T (1<=T<=100).
- T dong tiep theo moi dong la 2 so nguyen duong a,b (1<=a<=b<=10^6).
Output:
- Moi test case in ra tren 1 dong.

Ex:
Input           Output
2
1 50            1 4 9 16 25 36 49
10 20           16
*/
#include <iostream>
#include <math.h>
using namespace std;

// Recaution: I named the function was uncorret because we have to find square numbers (so chinh phuong)
void printDivisor1(int a, int b) {
    for(int i=a; i<=b; i++) {
        int check=sqrt(i);
        if(check*check==i) cout << i << " ";
    }
    cout << endl;
}

void printDivisor2(int a, int b) {
    for(int i=1; i<=sqrt(b); i++) {
        if(i*i>=a && i*i<=b) cout << i*i << " ";
    }
    cout << endl;
}

int cp(int n) { // In video, the author used long long to specify value of n 
    int can=sqrt(n)+0.5; // Plus 0.5 because sqrt or cbrt may causes error in math
    if(1ll*can*can==n) return 1;
    return 0; 
}               
/* The 1ll notation is often used when working with large integer values or when explicitly needing a long long type instead of the default integer type. 
It ensures that the value 1 is interpreted as a long long rather than a smaller integer type. 1ll=1 */           
    

int main() {
    // Find t
    int t;
    do {
        cout << "Enter t: ";
        cin >> t;
        if(t<1 || t>100) cout << "Enter t agian!\n";
    } while(t<1 || t>100);

    while(t--) {
        // Find [a;b]
        int a,b;
        do {
            cout << "Enter [a;b]: ";
            cin >> a >> b;
            if(a+b<=1 || a>pow(10,6) || b>pow(10,6)) cout << "Enter [a;b] again!\n"; 
        } while(a+b<=1 || a>pow(10,6) || b>pow(10,6));

        // Print the square numbers which belong to [a;b]
        cout << "Case 1: "; printDivisor1(a,b);
        cout << "Case 2: "; printDivisor2(a,b);
        cout << "Case 3: ";
        for(int i=a; i<=b; i++) {
            if(cp(i)) cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}