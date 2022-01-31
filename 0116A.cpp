#include <iostream>
#include <cmath>
using namespace std;

void solve();


int main() {

	solve();

	return 0;
}

void solve() {
	int currentP = 0, maxP = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int exit, enter;
		cin >> exit >> enter;
		currentP = currentP - exit + enter;
		maxP = max(maxP, currentP);
	}
	cout << maxP;
}
