// Codeforces problem: http://codeforces.com/contest/1399/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.rbegin(), a.rend());

		int i = a.size() - 1;
		while (i > 0 && a[i-1] - a[i] <= 1)
			i--;

		if (i > 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}
