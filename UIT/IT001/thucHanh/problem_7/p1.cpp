#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; 
	float a[100][100];
	cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
