#include <iostream>

using std::cout;
using std::cin;

int is_prime(int x) {
	if (x == 2 || x == 3) return 1;
	if (x == 1 || x % 2 == 0 || x % 3 == 0) return 0;
	for (int i=2; i*i < x; i++)
		if (x % i == 0) return 0;
	return 1;
}

int main() {
	int n;
	cin >> n;
	cout << is_prime(n);
	return 0;
}
