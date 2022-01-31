#include <iostream>
using namespace std;

int main() {

	int n, p[101], q[101], ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> q[i];
		ans += (q[i] - p[i] >= 2);
	}
	cout << ans;

	return 0;
}
