#include <iostream>
using namespace std;

void makeASmallerThanB(int &a, int &b) {
	if (a > b) {
		swap(a, b);
	}
}

int main() {

	int testcases;
	cin >> testcases;
	for (int testcase = 0; testcase < testcases; testcase++) {
		int a, b;
		cin >> a >> b;
		makeASmallerThanB(a, b);
		if (2*a >= b)
			cout << 4*a*a;
		else
			cout << b*b;
		cout << endl;
	}

	return 0;
}
