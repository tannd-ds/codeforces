// Codeforces problem: http://codeforces.com/contest/1367/problem/A
#include <iostream>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	cin.ignore();
	for (int i = 0; i < testcases; i++) {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i+=2) {
			cout << s[i];
		}
		cout << s[s.size()-1] << endl;
	}
	return 0;
}
