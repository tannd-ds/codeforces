#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0')
    len++;
    return len-k;
};


void myMemmove(char s[], int vt, int k) {
    int len = myStrlen(s, 0);
    for (int i = vt + k; i < len; ++i) {
        s[i-k] = s[i];
		s[i] = '\0';
	}
};

int myStrstr(char s[], char s1[]) {
	return 0;
};

void Chuanhoa(char s[]){
    int len = myStrlen(s, 0);
    for (int i=0; s[i] != '\0'; ++i)
        s[i] = tolower(s[i]);

    while (s[0] == ' ')
         myMemmove(s, 0, 1);

    while(s[len-1] == ' '){
        myMemmove(s, len-1, 1);
        len = myStrlen(s, 0);
    }

    len = myStrlen(s, 0);
    for (int i=1; i < len; ++i)
		if (s[i] == ' ' && s[i-1] == ' '){
			myMemmove(s, i, 1);
			i--;
			len--;
		}

    s[0] = toupper(s[0]);
    for (int i=1; i < len; ++i)
    if (s[i-1] == ' '){
        s[i] = toupper(s[i]);
    }
}
