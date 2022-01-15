#include <bits/stdc++.h>
using namespace std;


bool checker(float a[][101], int n) {
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (a[i][j] != a[j][i])
				return false;
	return true;
}

int main() {
	int n; 
	float a[101][101];
	cin >> n >> n;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin >> a[i][j];
	if (checker(a, n))
		cout << "Yes";
	else 
		cout << "No";
	return 0;
}
