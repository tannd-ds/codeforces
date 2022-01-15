#include <iostream>
using namespace std;

int sign(string operation) {
	if (operation[1] == '-')
		return -1;
	return 1;
}

int main() {

	string operation;
	int n, x = 0;
	cin >> n;
	getline(cin, operation);

	for (int i = 0; i < n; i++) {
		getline(cin, operation);
		x += sign(operation);
	}
	cout << x;

	return 0;
}
