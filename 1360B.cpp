#include <iostream>
using namespace std;

void quickSort(int *arr, int left, int right) {
	int i = left, j = right, mid = arr[(left + right) / 2];
	while (i <= j) {
		while (arr[i] < mid) i++;
		while (arr[j] > mid) j--;
		if (i <= j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	if (i < right) quickSort(arr, i, right);
	if (j > left) quickSort(arr, left, j);
}

void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void solve(int *s, int n) {
	int smallestDifference = s[1] - s[0];
	for (int i = 2; i < n; i++) {
		int diff = s[i] - s[i - 1];
		if (diff < smallestDifference) {
			smallestDifference = diff;
		}
	}
	cout << smallestDifference << endl;
}

int main() {

	int testcases;
	cin >> testcases;
	for (int t = 0; t < testcases; t++) {
		int n;
		cin >> n;
		int *s = new int[n];
		for (int i = 0; i < n; i++)
			cin >> s[i];

		quickSort(s, 0, n - 1);
		solve(s, n);

	}

	return 0;
}
