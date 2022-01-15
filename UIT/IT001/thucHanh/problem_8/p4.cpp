#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	//if (myStrcmp(s, "") == 0)
	//	cout << "Chuoi rong." << endl;
	//else
	//{
		StringReverse(s);
		cout << s << endl;
	//}
	return 0;
}

int myStrcmp(char s1[], char s2[]) {
    if (s1 == "") return 0;
    return 1;
}

int myStrlen(char s[], int k) {
    int i = k;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    return i-k;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
    int len = myStrlen(s1, vt);
    for (int i = 0; i < len; i++) {
        s[k+i] = s1[vt+i];
    }
    s[len] = '\0';
}

void StringReverse(char st[]) {
    char s_rep[MAX];
    myStrcpy(s_rep, 0, st, 0);
    int len = myStrlen(s_rep, 0);
	int i = 0, k = 0;

	while (i < len) {
		while (i < len && s_rep[i] != ' ') i++;
		int j = 0;
		while (k+j < i) {
			//cout << "--" << s_rep[i-1-]
			st[k+j] = s_rep[i-1-j];
			j++;
		}
		k += j+1;
		i++;
	}

}
