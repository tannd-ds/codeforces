// It runs fine here, but when submit on Codeforces, it wrong. Don't really understand.
#include <iostream>
#include <string>
using namespace std;

void solve(string s, string t);

int main() {

	string s, t;
	getline(cin, s);
	getline(cin, t);

	solve(s, t);

	return 0;
}

void solve(string s, string t) {
	if (s.size() != t.size()) {
		cout << "NO";
	} else {
		int i = 0;
		while (s[i] == t[t.size() - 1 - i]) i++;
		if (i > s.size())
			cout << "YES";
		else
			cout << "NO";
	}
}
