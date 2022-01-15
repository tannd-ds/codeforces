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
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
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

void StringReverse(char s[])
{
    int len = myStrlen(s, 0);
    int i;
    int j;
    for(i = len-1 ; i>=0 ; i--)
    {
        j = i;
        while(s[j] != ' ' && j >= 0) j--;

        for(int t = j+1; t <= i; t++)
            cout << s[t];
        cout << " ";
        i = j;
    }
	s[0] = '\0';
}
