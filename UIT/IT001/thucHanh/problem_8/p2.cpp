
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,MAX,stdin);
	fgets(s1,MAX,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else {

        int len = myStrlen(s, 0);
        int len1 = myStrlen(s1, 0);
        ChenChuoiTaiVitriK(s, s1, k);
        for (int i=0; i < len + len1 - 1; i++)
            cout << s[i];
    }
}

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0')
    len++;
    return len-k;
};

void myPush(char s[], int vt, char c) {
    int len = myStrlen(s, 0);
    int i = myStrlen(s, 0);
    while (i > vt) {
        s[i] = s[i-1];
        i--;
    }
    s[vt] = c;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
    for (int i = 0; i < myStrlen(s1, 0); i++) {
        if (s1[i] != '\n') myPush(s, k+i, s1[i]);
    }
}
