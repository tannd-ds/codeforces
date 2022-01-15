#include <iostream>
using namespace std;

int main() {

	int n, h, a[1001], ans = 0;

	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > h)
			ans += 2;
		else
			ans++;
	}
	cout << ans;

	return 0;
}
