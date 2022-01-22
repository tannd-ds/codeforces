#include <iostream>
using namespace std;

#define MAX 1001

void input(int a[][MAX], int &n, int &m);
void solve(int a[][MAX], int n, int m);

int main() {
	int n, m, a[MAX][MAX] = {0};
	input(a, n, m);
	solve(a, n, m);
	return 0;
}

void input(int a[][MAX], int &n, int &m) {
	cout << "Nhap n, m: ";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
}

void solve(int a[][MAX], int n, int m) {
	/*
	 * dir -> Direction			   : 4*2 2D array, stores the vector for each direction.
	 * currDir -> Current Direction: an integer, stores the direction of the next step.
	 * printed 					   : an integer, stores number of elements printed.
	 */
	int dir[4][2] = {{ 0,  1},	// direction[0] -> Go right
					 { 1,  0},	// direction[1] -> Go down
					 { 0, -1},	// direction[2] -> Go left
					 {-1,  0}};	// direction[3] -> Go up

	int printed = 0;   // Nothing's been printed yet
	int currDir = 0;   // The first direction is Go right
	int i = 1, j = 1;  // The first position is in the top left corner
	while (printed < n*m) {
		cout << a[i][j] << " ";
		a[i][j] = 0;
		printed++;
		int iNext = i + dir[currDir][0];
		int jNext = j + dir[currDir][1];
		if (a[iNext][jNext] == 0) {
			currDir = (currDir + 1) % 4;
			iNext = i + dir[currDir][0];
			jNext = j + dir[currDir][1];
		}
		i = iNext;
		j = jNext;
	}
}
