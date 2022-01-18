#include <iostream>
using namespace std;

int main() {

	int n, curr = 1, a[100001];
	cin >> n;
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i-1] != a[i])
			curr++;
	}
	cout << curr;

	return 0;
}
