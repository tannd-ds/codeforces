// Codeforces Problem: http://codeforces.com/contest/1343/problem/B
#include <iostream>
using namespace std;

bool canContructAnswer(int n) {
	return n % 2 == 0 && (n/2) % 2 == 0;
}

void contructAnswer(int *a, int n) {
	int i = 0;
	int sumEven = 0;
	int sumOdd = 0;
	while (i < n/2) {
		a[i] = (i+1) * 2;
		sumEven += a[i];
		i++;
	}
	i = 0;
	while (i < n/2) {
		a[i + n/2] = (i+1) * 2 - 1;
		sumOdd += a[i + n/2];
		i++;
	}

	if (sumEven == sumOdd) {
		return;
	} else if (sumEven > sumOdd) {
		a[n-1] += sumEven - sumOdd;
	}
}

void printAnswer(int n) {
	int *a = new int[n];
	contructAnswer(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main() {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++) {
		int n;
		cin >> n;
		if (canContructAnswer(n)) {
			cout << "YES\n";
			printAnswer(n);
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
