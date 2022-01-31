#include <iostream>
using namespace std;

int isEqual(string s1, string s2) {
	for (int i = 0; i < s1.size(); i++)
		if (tolower(s1[i]) < tolower(s2[i])) return -1;
		else if (tolower(s1[i]) > tolower(s2[i])) return 1;
	return 0;
}

int main() {

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	cout << isEqual(s1, s2);

	return 0;
}
