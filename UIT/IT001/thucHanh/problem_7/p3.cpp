#include <bits/stdc++.h>
using namespace std;

bool is_eye(int a[][101], int n);

int main() {
	int n;
	int a[101][101];
	cin >> n;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin >> a[i][j];
	(is_eye(a, n)) ? cout << "true" : cout << "false";
	return 0;
}

bool is_eye(int a[][101], int n) {
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
				return false;
	return true;
}
