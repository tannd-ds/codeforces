#include <bits/stdc++.h>
using namespace std;

ifstream fi("./input");

bool is_frobenius(float a[][101], int n);

int main() {
	int n; 
	float a[101][101];
	fi >> n >> n;
	for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++)
			fi >> a[i][j];
	if (is_frobenius(a, n))
		cout << "Yes";
	else 
		cout << "No";
	return 0;
}

bool is_frobenius(float a[][101], int n) {
	bool has_one_col = false;
	int  col_index;
	for (int j=0; j<n; j++)
		for (int i=0; i<n; i++){
			if (i==j) {
				if (a[i][j] != 1) return false;
				a[i][j] = 0;
			}
			if (a[i][j] != 0) {
				if (!has_one_col) {
					has_one_col = true;
					col_index = j;
				}
				else if (j != col_index) return false;
			}
		}
			
	return true;
}
