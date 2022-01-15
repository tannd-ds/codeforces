#include <iostream>
#include <string.h>
using namespace std;

int demKhoangTrang(char s[]);
int demHoa(char s[]);
int demThuong(char s[]);

int main() {
	char s[] = "Hello World !";
	cout << s << "\n";
	cout << "So khoang trang: " << demKhoangTrang(s);
	cout << "\nSo ki tu hoa: " << demHoa(s);
	cout << "\nSo ki tu thuong: " << demThuong(s);
	return 0;
}

int demKhoangTrang(char s[]) {
	int cnt = 0;
	for (int i=0; i < strlen(s); i++){
		if (s[i] == ' ') cnt++;
	}
	return cnt;
}

int demHoa(char s[]) {
	int cnt = 0;
	for (int i=0; i < strlen(s); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') cnt++;
	}
	return cnt;
}

int demThuong(char s[]) {
	int cnt = 0;
	for (int i=0; i<strlen(s); i++) {
		if ('a' <= s[i] && s[i] <= 'z') cnt++;
	}
	return cnt;
}

void lietKeTu(char s[]) {
	char word[];
}
