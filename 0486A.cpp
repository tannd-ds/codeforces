#include <iostream>
using namespace std;

long long evenSum(long long n) {
	if (n % 2 != 0) n--;
	return n * (n + 2) / 4;
}

long long sum(long long n) {
	return n * (n + 1) / 2;
}

long long calculate(long long n) {
	long long i = 1, ans = 0;
	return 2 * evenSum(n) - sum(n);
}

int main() {

	long long n;
	cin >> n;
	cout << calculate(n);

	return 0;
}
