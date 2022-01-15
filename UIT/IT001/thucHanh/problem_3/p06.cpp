#include <iostream>

using std::cout;
using std::cin;

int sum(int n) {
	int sum = 0;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}
