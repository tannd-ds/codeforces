// Codeforces Problem: http://codeforces.com/contest/1409/problem/A
#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		int diff = abs(a - b);

		if (diff % 10 == 0) {
			cout << diff / 10 << endl;
		} else {
			cout << diff / 10 + 1 << endl;
		}

	}

	return 0;
}
