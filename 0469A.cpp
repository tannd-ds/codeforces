#include <iostream>
using namespace std;

int main() {

	int n, p, q, a[101], b[101];
	bool passed = false;
	cin >> n;
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> a[i];
		if (a[i] >= n)
			passed = true;
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> b[i];
		if (b[i] >= n)
			passed = true;
	}

	if (passed)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";

	return 0;
}
