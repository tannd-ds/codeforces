#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (a == 0 || b == 0) return 0;
	while (a != b) {
		if (a > b) a = a - b;
		else if (b > a) b = b - a;
	}
	return a;
}

void simplify(int a, int b) {
	int denominator = GCD(a, b);
	cout << a/denominator << "/" << b/denominator;
}

int main() {

	int a, b;
	cin >> a >> b;
	simplify(7 - max(a, b), 6);


	return 0;
}
