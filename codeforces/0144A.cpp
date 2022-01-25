#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

int main() {
	int n, a[100], second = 0;

	cin >> n;
	int max = 0, maxIndex = 0;
	int min = 101, minIndex = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (max < a[i]) {
			max = a[i];
			maxIndex = i;
		}
	}
	for (int i = maxIndex; i > 0; i--) {
		swap(a[i], a[i-1]);
		second++;
	}

	for (int i = 0; i < n; i++) {
		if (min >= a[i]) {
			min = a[i];
			minIndex = i;
		}
	}
	for (int i = minIndex; i < n-1; i++) {
		swap(a[i], a[i+1]);
		second++;
	}

	cout << second;

	return 0;
}
