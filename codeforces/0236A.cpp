#include <iostream>
using namespace std;

int cntDistinctChar(string s) {
	bool isAppeared[300] = {false};
	int cnt = 0;

	for (int i = 0; i < s.size(); i++) {

		if (!isAppeared[int(s[i])]) {
			cnt++;
			isAppeared[int(s[i])] = true;
		}
	}

	return cnt;
}

int main() {

	string s;
	getline(cin, s);

	if (cntDistinctChar(s) % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	return 0;
}
