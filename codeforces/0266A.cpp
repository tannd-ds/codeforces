#include <iostream>
using namespace std;

int removeSameColorNeighbor(string s) {
	int i = 1, step = 0;
	while (i < s.size()) {
		while (s[i] == s[i-1]) {
			s.erase(i, 1);
			step++;
		}
		i++;
	}
	return step;
}

int main() {

	string s;
	getline(cin, s); // Don't need to store n
	getline(cin, s);

	cout << removeSameColorNeighbor(s);

	return 0;
}
