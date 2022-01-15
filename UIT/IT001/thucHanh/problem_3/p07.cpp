#include <iostream>

using std::cout;
using std::cin;

bool is_palindrome(int n) {
	if (n < 0) return false;
	int reverse = 0, n_temp = n;
	while (n_temp) {
		reverse = reverse * 10 + n_temp % 10;
		n_temp /= 10;
	}
	return (n == reverse);
}

int main() {
	int n;
	cin >> n;
	if (is_palindrome(n))
		cout << "true";
	else
		cout << "false";
	return 0;
}
