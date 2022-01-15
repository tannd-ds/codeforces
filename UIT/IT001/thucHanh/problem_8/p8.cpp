#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main() {
	char s1[MAX], s2[MAX];

	fgets(s1,MAX,stdin);
	fgets(s2,MAX,stdin);
	bool kt = myStrcat(s1, s2);

	if (!kt)
		cout << "Khong noi duoc. Khong du bo nho.";
	else {
		cout << s1 << endl;
	}
}

int myStrlen(char s[]) {
	int i = 0;
	while (s[i] != '\0') i++;
	return --i;
}

bool myStrcat(char s1[], char s2[]) {
	int len1 = myStrlen(s1);
	int len2 = myStrlen(s2);
	s1[len1] = ' ';
	len1++;
	for (int i = 0; i < len2; i++) {
		s1[len1 + i] = s2[i];
	}
	return (myStrlen(s1) <= 254);
}
