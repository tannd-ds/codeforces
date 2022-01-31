#include <iostream>
using namespace std;

int main() {

	int n, p[101], ans[101];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		ans[p[i]] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << " ";

	return 0;
}
