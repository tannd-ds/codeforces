#include <iostream>
using namespace std;

int main() {

	int targetPos, step = 0;
	cin >> targetPos;

	while (step * 5 < targetPos) step++;
	cout << step;

	return 0;
}
