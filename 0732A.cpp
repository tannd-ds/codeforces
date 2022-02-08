// Codeforces progblemset: http://codeforces.com/problemset/problem/732/A
#include <iostream>
using namespace std;

int main() {

	int k, r, numberOfShovels = 1;
	cin >> k >> r;
	while (k * numberOfShovels % 10 != r && k * numberOfShovels % 10 != 0) {
		numberOfShovels++;
	}
	cout << numberOfShovels;
	return 0;
}
