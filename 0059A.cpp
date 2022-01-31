#include <iostream>
#include <string>
using namespace std;

void solve(string s);


int main() {

	string s;
	getline(cin, s);

	solve(s);

	return 0;
}

void solve(string s) {
	int cntLower = 0, cntUpper = 0;
	for (int i = 0; i < s.size(); i++)
		if (islower(s[i]))
			cntLower++;
		else
			cntUpper++;
	if (cntUpper > cntLower)
		for (int i = 0; i < s.size(); i++)
			s[i] = toupper(s[i]);
	else
		for (int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
	cout << s;
}
