#include <iostream>
using namespace std;

bool checkEasiness(int n) {
	int ans;
	for (int i = 0; i < n; i++) {
		cin >> ans;
		if (ans == 1)
			return false;
	}
	return true;
}

int main() {

	int n;
	cin >> n;
	bool isEasy = checkEasiness(n);
	if (isEasy)
		cout << "EASY";
	else
		cout << "HARD";

	return 0;
}

