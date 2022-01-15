#include <iostream>

using std::cout;
using std::cin;

int sum(int n) {
	int sum = 0;
	for (int i=1; i<=n/2; i++)
		sum += (n % i == 0) * i;
	return sum;
}

int main() {
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}
