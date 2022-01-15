#include <iostream>
using namespace std;

int main() {

	int a = 2, b = 3;
	int* p = &a, w = &b;

	cout << *p << "\n";
	cout << *w << "\n";

	return 0;
}
