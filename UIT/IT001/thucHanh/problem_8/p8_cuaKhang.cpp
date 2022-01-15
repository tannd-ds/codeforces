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
	if (kt==false) {
        cout << "Khong noi duoc. Khong du bo nho.";
    }
    else puts(s1);
}
int myStrlen(char s[]) {
    for (int i=0; ;i++) {
        if (s[i]=='\0') return i;
    }
}
bool myStrcat (char s1[], char s2[]) {
    int i=myStrlen(s1)-1,j=0;
    if ((i + 1 + myStrlen(s2) + 1) <= 254) {
        while(s2[j] != '\0') {
            s1[i++] = s2[j++];
        }
        s1[i] = '\0';
        return true;
    }
    else return false;
}
