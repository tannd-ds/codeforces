
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

bool containNumber(char s[]);

int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	if (containNumber(s))
		cout << "CHUOI KHONG HOP LE.";
	else
		cout << s;

	return 0;
}

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0')
    len++;
    return len-k;
};

bool containNumber(char s[]) {
	for (int i = 0; i < myStrlen(s, 0); i++) {
		if (isdigit(s[i]))
			return 1;
	}
	return 0;
}
