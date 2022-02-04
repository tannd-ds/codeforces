// Codeforces problem: http://codeforces.com/contest/581/problem/A
#include <iostream>
using namespace std;

int main() {
	int redSocks, blueSocks;
	cin >> redSocks >> blueSocks;
	int pairOfDifferentSocks = min(redSocks, blueSocks);
	int pairOfSameSocks = (max(redSocks, blueSocks) - pairOfDifferentSocks) / 2;

	cout << pairOfDifferentSocks << " " << pairOfSameSocks << "\n";

}
