// Codeforces problem: http://codeforces.com/contest/1352/problem/A
#include <iostream>
using namespace std;

int numberOfDigitsDifferentThanZero(int n) {
	int count = 0;
	while (n > 0) {
		if (n % 10 != 0) count++;
		n /= 10;
	}
	return count;
}

int main() {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++) {
		int n, multiplier = 1;
		cin >> n;
		cout << numberOfDigitsDifferentThanZero(n) << endl;
		while (n > 0) {
			int currentDigit = n % 10;
			if (currentDigit != 0) {
				cout << currentDigit * multiplier << " ";
			}
			multiplier *= 10;
			n /= 10;
		}
		cout << "\n";
	}
	return 0;
}
