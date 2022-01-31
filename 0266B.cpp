#include <iostream>
using namespace std;

#define MAX 51;

void solve(int n, int t, string s);

int main() {

	string s;
	int n, t;
	cin >> n >> t;
	getline(cin, s); // ignore current line
	getline(cin, s);
	solve(n, t, s);

	return 0;
}

void swap(char &a, char &b) {
	char c = a;
	a = b;
	b = c;
}

void solve(int n, int t, string s) {
	for (int j = 0; j < t; j++)
		for (int i = 1; i < n; i++)
			if (s[i] == 'G' && s[i-1] == 'B') {
				swap(s[i], s[i-1]);
				i++;
			}
	cout << s;
}
