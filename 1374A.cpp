// Codeforces problem: http://codeforces.com/contest/1374/problem/A
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x, y, n;
		cin >> x >> y >> n;
		cout << x * int((n-y)/x) + y << endl;
	}
	return 0;
}
