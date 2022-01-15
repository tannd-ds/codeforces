#include <iostream>
using namespace std;

int main() {
	cout << "\n";

	int u = 2021;
	int *p = &u;

	*p = 12;
	cout << u;

	cout << *p << "\n";

	return 0;
}
