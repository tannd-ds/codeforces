#include <iostream>
using namespace std;

string solve(string s) {
	int cnt[5] = {0};
	string result = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') cnt[1]++;
		else if (s[i] == '2') cnt[2]++;
		else if (s[i] == '3') cnt[3]++;
	}
	while (cnt[1] || cnt[2] || cnt[3]) {
		while (cnt[1]) {
			result.push_back('1');
			cnt[1]--;
			if (cnt[1] || cnt[2] || cnt[3]) result.push_back('+');
		}
		while (cnt[2]) {
			result.push_back('2');
			cnt[2]--;
			if (cnt[2] || cnt[3]) result.push_back('+');
		}
		while (cnt[3]) {
			result.push_back('3');
			cnt[3]--;
			if (cnt[3] || cnt[4]) result.push_back('+');
		}
	}
	return result;
}

int main() {

	string s;
	getline(cin, s);

	cout << solve(s);

	return 0;
}
