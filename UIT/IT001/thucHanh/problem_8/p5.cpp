#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrcmp(char s1[], char s2[]) {
    if (myStrlen(s1, 0) == 0) return 0;
    return 1;
}

int myStrlen(char s[], int k) {
    int i = k;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    return i-k;
}

void DemKyTu(char s[]) {
    int cnt[130] = {0};
    bool isPrinted[130] = {false};
    int len = myStrlen(s, 0);
    for (int i = 0; i < len; i++) {
        cnt[int(s[i])]++;
    }

    for (int i = 0; i < len; i++) {
        if (!isPrinted[int(s[i])]) {
            cout << s[i] << ": " << cnt[int(s[i])] << "\n";
            isPrinted[int(s[i])] = true;
        }
    }

}
