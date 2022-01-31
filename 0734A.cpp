#include <iostream>
#include <string>

using namespace std;

void solve(string s);

int main() {
	string s;
	getline(cin, s);
	getline(cin, s);
	solve(s);

	return 0;
}

void solve(string s) {
	int cntA = 0, cntD = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'A')
			cntA++;
		else
			cntD++;
	if (cntA == cntD)
		cout << "Friendship";
	else if (cntA > cntD)
		cout << "Anton";
	else
		cout << "Danik";

}
