/*Ex3. The rectangle 3
- Input
5
- Output
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
21 22 23 24 25
*/
#include <iostream>
using namespace std;

int main() {
	int n, cnt=1;
	cout << "Enter n: ";
	cin >> n;

	for(int i=1; i<=n*n; i++) {
		if(cnt==n+1) {
			cout << endl;
			cnt=1;
		}
		cout << i << " ";
		cnt++;
	}
	
	/*
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cout << cnt;
			cnt++;
		
		cout << endl;
	}
	*/
	
	return 0;
}