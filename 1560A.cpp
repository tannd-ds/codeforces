#include <iostream>
using namespace std;

int main() {

	int testcases;
	cin >> testcases;
	for (int t = 0; t < testcases; t++) {
		int targetPosition;
		cin >> targetPosition;

		int currentPosition = 1;
		int currentValue = 1;
		while (currentPosition < targetPosition) {
			currentPosition++;
			currentValue++;
			while (currentValue % 3 == 0 || (currentValue % 10) == 3)
				currentValue++;
		}

		cout << currentValue << endl;
	}

	return 0;
}
