#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		n++;
		char *s = new char[n];
		int charCount[255] = { 0 };

		s[0] = '0';
		for (int j = 1; j < n; j++)
			cin >> s[j];

		bool isDistracted = false;
		for (int j = 1; j < n; j++) {
			if (charCount[s[j]] != 0 && s[j] != s[j - 1]) {
				cout << "NO" << endl;
				isDistracted = true;
				break;
			} else {
				charCount[s[j]]++;
			}
		}

		if (!isDistracted)
			cout << "YES" << endl;
	}

	return 0;
}
