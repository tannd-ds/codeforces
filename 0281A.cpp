#include <iostream>
using namespace std;

string capitalize(string s) {
	s[0] = toupper(s[0]);
	return s;
}

int main() {

	string s;
	getline(cin, s);

	cout << capitalize(s);

	return 0;
}
