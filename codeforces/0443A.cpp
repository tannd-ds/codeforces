#include <iostream>
using namespace std;

int main() {

	string s;
	int distinct = 0;
	getline(cin, s);

	int charCount[128] = {0};
	for (int i = 1; i < s.size() - 1; i+=3) {
		charCount[s[i]]++;
	}

	for (int i = 65; i < 128; i++) {
		distinct += (charCount[i] > 0);
	}

	cout << distinct;

	return 0;
}
