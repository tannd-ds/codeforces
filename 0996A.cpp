#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int bills[5] = {1, 5, 10, 20, 100};
	int currentBillIndex = 4, numberOfBills = 0;
	while (n > 0) {
		if (n >= bills[currentBillIndex]) {
			n -= bills[currentBillIndex];
			numberOfBills++;
		} else {
			currentBillIndex--;
		}
	}
	cout << numberOfBills;
	return 0;
}
