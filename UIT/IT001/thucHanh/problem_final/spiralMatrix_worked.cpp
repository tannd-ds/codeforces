#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 1001

void input(int a[][MAX], int &n, int &m);
void output(int a[][MAX], int &n, int &m);
void solve(int a[][MAX], int n, int m);

int main() {
	int n, m, a[MAX][MAX] = {0};
	input(a, n, m);
	output(a, n, m);
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

void output(int a[][MAX], int &n, int &m) {
	cout << "\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << setw(5) << left << a[i][j];
		cout << "\n";
	}
}



void solve(int a[][MAX], int n, int m) {
	/*
	 * answer					   : n*m 1D array, stores the answer
	 * dir -> Direction			   : 4*2 2D array, stores the vector for each direction.
	 * currIndex -> Current Index  : an integer, stores current Index in the answer array.
	 * currDir -> Current Direction: an integer, stores the direction of the next step.
	 */
	int answer[MAX*MAX] = {0};
	int dir[4][2] = {{ 0,  1},	// dicrection[0] -> Go right
					 { 1,  0},	// dicrection[1] -> Go down
					 { 0, -1},	// dicrection[2] -> Go left
					 {-1,  0}};	// dicrection[3] -> Go up

	int currIndex = 0;
	int currDir = 0;   // The first dir is go right
	int i = 1, j = 0; // The first position is in the top left corner, offset 1
	while (currIndex < n*m) {
		while (a[i + dir[currDir][0]][j + dir[currDir][1]] > 0) { // Check if next Position is not visited
			answer[currIndex] = a[i + dir[currDir][0]][j + dir[currDir][1]];
			a[i + dir[currDir][0]][j + dir[currDir][1]] = 0; // Mark this Position is visited
			i += dir[currDir][0];
			j += dir[currDir][1];
			currIndex++;
		}
		currDir = (currDir + 1) % 4;
	}

	for (int i = 0; i < n*m; i++)
		cout << answer[i] << " ";
}



