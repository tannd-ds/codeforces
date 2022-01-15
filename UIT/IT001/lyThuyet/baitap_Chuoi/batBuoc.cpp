#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

int countWord(string s);
void capitalize(string &s);
void strip(string &s);

int main() {
	string s;
	cout << "Nhap vao 1 chuoi: ";
	getline(cin, s);

	cout << "Chuoi truoc khi xoa ki tu thua: |" << s << "|\n";
	strip(s);
	cout << "Chuoi  sau  khi xoa ki tu thua: |" << s << "|\n";
	cout << "So tu trong chuoi: " << countWord(s) << "\n";
	capitalize(s);
	cout << "Chuoi viet hoa chu cai dau moi tu: " << s << "\n";

	return 0;
}

int countWord(string s) {
	int cnt = 0;
	for (int i=0; i< s.size(); i++)
		if (s[i] == ' ') cnt++;
	return cnt + 1;
}

void capitalize(string &s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
		if (s[i-1] == ' ') s[i] = toupper(s[i]);
}

void strip(string &s) {
	while (s[0] == ' ') s.erase(0, 1);
	while (s[s.size()-1] == ' ') s.erase(s.size()-1, 1);
	int i = 0;
	while (i < s.size())
		if (s[i-1] == ' ' && s[i] == ' ') s.erase(i, 1);
		else i++;
}
