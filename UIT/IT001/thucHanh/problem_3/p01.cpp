#include <iostream>

using std::cout;
using std::cin;

int main() {
	int n;
	do 
		cin >> n;
	while (n < 1 || n > 30);

	int fib = 1, fib_1 = 1, fib_2;
	for (int i = 2; i < n; i++) {
		fib_2 = fib_1;
		fib_1 = fib;
		fib = fib_1 + fib_2;
	}
	cout << fib << "\n";
	return 0;
}
