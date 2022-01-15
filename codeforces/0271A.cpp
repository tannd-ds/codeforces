#include <iostream>
using namespace std;


int findNextDistinct(int n);
int isDistinct(int n);

int main() {

	int n;
	cin >> n;
	cout << findNextDistinct(n);

	return 0;
}

int findNextDistinct(int n) {
	n++;
	while (!isDistinct(n)) n++;
	return n;
}

int isDistinct(int n) {
	int digitCnt[10] = {0}; // The Count for each digit
	bool isDistinct = true;
	while (n > 0) {
		if (digitCnt[n % 10] > 0) {
			isDistinct = false;
			break;
		}
		digitCnt[n % 10]++;
		n /= 10;
	}
	return isDistinct;
}
