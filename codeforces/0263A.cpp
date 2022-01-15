#include <iostream>
using namespace std;

int main() {

	int N = 5;
	int mark_i, mark_j;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			int mark;
			cin >> mark;
			if (mark == 1) {
				mark_i = i;
				mark_j = j;
			}
		}

	cout << abs(mark_i - 2) + abs(mark_j - 2);

	return 0;
}
