#include <iostream>
using namespace std;

int main() {

	int n, k, cnt = 0;
	int a[52];
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++)
		cnt += (a[i] >= a[k] && a[i] > 0);

	cout << cnt;

	return 0;
}
