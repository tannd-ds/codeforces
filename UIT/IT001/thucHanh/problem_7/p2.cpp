#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100][100]; 
	long long fib[10000] = {1, 1};
	cin >> n;

	for (int i=2; i<2*n; i++)
		fib[i] = fib[i-1] + fib[i-2];

	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			a[i][j] = fib[i+j]; 

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
