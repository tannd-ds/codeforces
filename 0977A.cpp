#include <iostream>
using namespace std;

void solve(long n, int k);

int main() {

	long n;
	int k;
	cin >> n >> k;

	solve(n, k);

	return 0;
}

void solve(long n, int k) {
	for (int i = 0; i < k; i++) {
		if (n % 10 == 0)
			n /= 10;
		else
			n -= 1;
	}
	cout << n;
}
