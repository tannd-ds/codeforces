#include <iostream>
using namespace std;

bool canBeDivided(int n);

int main() {
	int n;
	cin >> n;

	if (canBeDivided(n))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

bool canBeDivided(int n) {
	if (n % 2 != 0) return false;
	if (n % 2 == 0 && (n/2) % 2 == 0) return true;
	for (int i = 1; i < n/2; i++)
		if (i % 2 == 0 && (n - i) % 2 == 0) return true;
	return false;
}
