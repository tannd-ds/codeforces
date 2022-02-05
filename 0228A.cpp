// Codeforces problem: http://codeforces.com/contest/228/problem/A
#include <iostream>
using namespace std;

int main() {

	int needToBuy = 0;
	int colors[4];

	for (int i = 0; i < 4; i++) {
		int color;
		cin >> color;
		colors[i] = color;
		for (int j = 0; j < i; j++) {
			if (colors[i] == colors[j]) {
				needToBuy++;
				break;
			}
		}
	}

	cout << needToBuy << endl;

	return 0;
}
