/* Ex15. The char triangle 7
Input               Output
5                   A
                    A B A
                    A B C B A
                    A B C D C B A
                    A B C D E D C B A
**Caution: In this file, I try to print these lines into the text file so you can ignore
the elements that don't belong to this question :)) (*>*)
*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    FILE *f;
    f=fopen("test.txt","w");
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++ ){
        char x='A';
        for(int j=1; j<=2*i-1; j++) {
            if(j<i) {
                fprintf(f,"%c ",x);
                cout << x++ << ' ';   
            }
            else {
                fprintf(f,"%c ",x);
                cout << x-- << ' ';
            }
        }
        cout << endl;
        fprintf(f,"\n");
        
    }
    fclose(f);
    return 0;
}