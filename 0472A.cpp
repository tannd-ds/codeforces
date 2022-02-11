// Codeforces: http://codeforces.com/problemset/problem/472/A
#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {

	int n;
	cin >> n;
	int firstNum = 2, secondNum = n - firstNum;
	while (isPrime(firstNum) || isPrime(secondNum)) {
		firstNum++;
		secondNum = n - firstNum;
	}

	cout << firstNum << " " << secondNum << endl;

	return 0;
}
