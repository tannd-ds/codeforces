#include <bits/stdc++.h>
using namespace std;

#define AMAX 101

ifstream fi("./input");

void input_arr(float a[][AMAX], int &n, int &m);
void output_arr(float a[][AMAX], int n, int m);
void product(float a[][AMAX], int n, int m, float b[][AMAX], int l, int k);

int main() {
	int n, m, l, k;
	float a[AMAX][AMAX], b[AMAX][AMAX];
	input_arr(a, n, m);
	input_arr(b, l, k);
	product(a, n, m, b, l, k);
	return 0;
}

void input_arr(float a[][AMAX], int &n, int &m) {
	fi >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			fi >> a[i][j];
}

void output_arr(float a[][AMAX], int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)
			cout << right << setw(4) << a[i][j];
		cout << "\n";
	}
}

void product(float a[][AMAX], int n, int m, float b[][AMAX], int l, int k) {
	float c[AMAX][AMAX];
	for (int i=0; i<n; i++)
		for (int j=0; j<k; j++)
			for (int x=0; x<m; x++)
				c[i][j] += a[i][x] * b[x][j];
	output_arr(c, n, k);
}
