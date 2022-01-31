#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	int year = 1;
	while (pow(3, year) * a <= pow(2, year) * b) year++;
	cout << year;

	return 0;
}
