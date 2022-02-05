// Codeforces problem: http://codeforces.com/contest/41/problem/A
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s, t;
	getline(cin, s);
	getline(cin, t);

	if (s.length() != t.length()) {
		cout << "NO" << endl;
		return 0;
	} else {
		int i = 0;
		while (i < s.length()) {
			if (s[i] != t[t.length() - 1 - i]) {
				cout << "NO" << endl;
				return 0;
			}
			i++;
		}
	}
	cout << "YES" << endl;

	return 0;
}
