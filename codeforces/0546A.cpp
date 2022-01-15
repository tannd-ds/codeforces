#include <iostream>
using namespace std;

int partialSum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main() {

	int k, n, w;
	cin >> k >> n >> w;
	// if the formula is <= 0, he has enough money
	cout << max(partialSum(w)*k - n, 0);

	return 0;
}
