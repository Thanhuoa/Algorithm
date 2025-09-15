/*Ex4. The rectangle 4
- Input
4
- Ouput
~~~~1
~~~22
~~333
~4444
55555
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(j<=n-i) cout << "~";
			else cout << i;
		}
		cout << "\n";
	}
	
	return 0;
}