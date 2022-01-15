#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

string 	capitalize(string s);
string 	strip(string s);
bool 	isPalindrome(string s);
string 	reverseStr(string s);
int		findIndex(string s, string ss);
string	replace(string s, char a, char b);
int 	countOccurence(string s, char c);
void	printUpper(string s);
string  toggleCase(string s);
char	mostOccurence(string s);
string 	popWord(string s, string word);
void	printOption();

int main() {
	string s;
	cout << "Nhap vao 1 chuoi: ";
	getline(cin, s);

	s = strip(s);
	int opt;
	do {
		printOption();
		cin >> opt;
		switch (opt) {
			case 0:
			case 1:
				if (isPalindrome(s)) {
					cout << "Chuoi doi xung\n";
					getchar();
				} else
					cout << "Chuoi khong doi xung\n";
				getchar();
				break;
			case 2:
				break;
			case 3:
				cout << "Chuoi dao nguoc cua S: " << reverseStr(s) << "\n";
				break;
			case 4:
				break;
		}
	} while (opt != 0);

	// Tim vi tri chuoi con trong s
	string ss;
	cout << "Nhap chuoi con can tim vi tri: ";
	getline(cin, ss);
	cout << "Vi tri cua " << ss << " trong chuoi la: " << findIndex(s, ss) << "\n";

	// Thay the ki tu a thanh b trong s
	char a, b;
	cout << "Nhap ki tu CAN thay the va DUOC thay the: ";
	cin  >> a >> b;
	s = replace(s, a, b);
	cout << "Chuoi sau khi thay " << a << " thanh " << b << ": " << s << "\n";

	// Dem so lan xuat hien cua c trong s
	char c;
	cout << "Nhap ki tu can dem so lan xuat hien: ";
	cin  >> c;
	cout << "So lan xuat hien cua " << c << " trong chuoi: " << countOccurence(s, c) << "\n";

	// In ki tu in hoa trong s
	cout << "Cac ki tu hoa trong s: ";
	printUpper(s);
	cout << "\n";

	// Doi chu xen ke
	cout << "Xem ke hoa - thuong: " << toggleCase(s) << "\n";

	// Ki tu xuat hien nhieu nhat
	cout << "Ki tu xuat hien nhieu nhat trong mang: |" << mostOccurence(s) << "|\n";

	// Xoa mot tu trong s
	cout << "Nhap tu can xoa: ";
	cin  >> ss;
	cout << "Chuoi sau khi xoa tu " << ss << ": " << popWord(s, ss);

	return 0;
}

string capitalize(string s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
		if (s[i-1] == ' ') s[i] = toupper(s[i]);
	return s;
}

string strip(string s) {
	while (s[0] == ' ') s.erase(0, 1);
	while (s[s.size()-1] == ' ') s.erase(s.size()-1, 1);
	int i = 0;
	while (i < s.size())
		if (s[i-1] == ' ' && s[i] == ' ') s.erase(i, 1);
		else i++;
	return s;
}

bool isPalindrome(string s) {
	int i=0;
	while (i <= (s.size()+1)/2 && s[i] == s[s.size()-i-1]) i++;
	return i > (s.size()+1)/2;
}

string reverseStr(string s) {
	string s_rev = s;
	for (int i = s.size()-1; i >= 0; i--)
		//s_rev.push_back(s[i]);
		s_rev[s.size()-i-1] = s[i];

	return s_rev;
}

int findIndex(string s, string ss) {
	int i = 0;
	if (ss.size() > s.size()) return -1;
	for (i = 0; i < s.size() - ss.size(); i++)
		if (s.substr(i, ss.size()) == ss) break;
	return (s.substr(i, ss.size()) == ss) ? i : -1;
}

string replace(string s, char a, char b) {
	for (int i=0; i<s.size(); i++)
		if (s[i] == a) s[i] = b;
	return s;
}

int	countOccurence(string s, char c) {
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == c) cnt++;
	return cnt;
}

void printUpper(string s) {
	for (int i = 0; i < s.size(); i++)
		if (isupper(s[i])) cout << s[i];
}

string toggleCase(string s) {
	for (int i = 0; i < s.size(); i++)
		if (i % 2 == 0) s[i] = toupper(s[i]);
		else s[i] == tolower(s[i]);
	return s;
}

char mostOccurence(string s) {
	int cnt[128] = {0};
	int maxCnt = -1;
	char maxChar = '\0';
	for (int i = 0; i < s.size(); i++) {
		cnt[int(s[i])]++;
		if (cnt[int(s[i])] > maxCnt) {
			maxCnt = cnt[int(s[i])];
			maxChar = s[i];
		}
	}
	return maxChar;
}

string popWord(string s, string word) {
	int i = 0;
	while (i < s.size()) {
		if (s.substr(i, word.size()) == word)
			s.erase(i, word.size());
		i++;
	}
	return strip(s);
}

void printOption() {
	cout << "------------------------------------------------------------------\n";
	cout << "1. Kiem tra chuoi doi xung\n";
	cout << "2. Tinh do dai chuoi\n";
	cout << "3. Dao nguoc cac ki tu truong chuoi\n";
	cout << "4. Tim vi tri ky tu xuat hien dau tien trong chuoi\n";
	cout << "5. Tim vi tri xuat hien cua ky tu c trong chuoi s\n";
	cout << "6. Tim chuoi con trong mot chuoi\n";
	cout << "7. Thay the ky tu trong chuoi\n";
	cout << "8. Dem so lan xuat hien cua ky tu c trong s\n";
	cout << "9. Thay the ky tu bang ky tu moi\n";
	cout << "10. Xuat cac ky tu in hoa trong chuoi\n";
	cout << "11. Doi xen ke ky tu hoa ky tu thuong\n";
	cout << "12. Dem mot ky tu xuat hien bao nhieu lan trong chuoi\n";
	cout << "13. Tim kiem ky tu xuat hien nhieu nhat trong chuoi\n";
	cout << "14. Xoa mot tu trong chuoi\n";
	cout << "------------------------------------------------------------------\n";
	cout << "Chon mot chuc nang: ";
}
