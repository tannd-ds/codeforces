#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);

int main() {
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);

	cout << s << endl << s1 << endl;
	return 0;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
    int len = myStrlen(s1, vt);
    for (int i = 0; i <= len; i++) {
        s[k+i] = s1[vt+i];
    }
    s[len] = '\0';
}

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0' && s[len] != '\n') len++;
    return len-k;
}

void myMemmove(char s[], int vt, int k) {
    int len = myStrlen(s, 0);
    for (int i = 0; s[vt + i + k] != '\0'; i++) {
        s[vt + i] = s[vt + i + k];
    }
    s[len-1] = '\0';
}

void myPush(char s[], int vt, char c) {
    int i = myStrlen(s, 0);
    while (i > vt) {
        s[i] = s[i-1];
        i--;
    }
    s[vt] = c;
}

void Chuanhoa(char s[]){
    int len = myStrlen(s, 0);

    while (s[0] == ' ') {
        myMemmove(s, 0, 1);
        len--;
    }

    while(s[len-1] == ' '){
        myMemmove(s, len-1, 1);
        len--;
    }

	int i = 1;
	while (i < len) {
        if ((s[i] == ' ' && s[i-1] == ' ') || (s[i-1] == ' ' && s[i] == '.')) {
            myMemmove(s, i-1, 1);
            i--;
            len--;
        }
		i++;
	}

	i = 1;
	while (i < len) {
        if ((s[i-1] == '.' && s[i] != ' ')) {
            myPush(s, i, ' ');
            i++;
            len++;
        }
		i++;
	}

}
