#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 1001

void input(int a[][MAX], int &n, int &m);
void output(int a[][MAX], int &n, int &m);
void solve(int a[][MAX], int n, int m);

int main() {
	int n, m, a[MAX][MAX];
	input(a, n, m);
	output(a, n, m);
	solve(a, n, m);
	return 0;
}

void input(int a[][MAX], int &n, int &m) {
	cout << "Nhap n, m: ";
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void solve(int a[][MAX], int n, int m) {
	int answer[MAX*MAX] =  {0};
	int direction[4][2] =  {{ 0,  1},	// dicrection[0] -> Go right
							{ 1,  0},	// dicrection[1] -> Go down
							{ 0, -1},	// dicrection[2] -> Go left
							{-1,  0}};	// dicrection[3] -> Go up
	int border[4] = {m-1, n-1, 0, 0};		// Border for each direction

	int currentPosition  = 0;
	int currentDirection = 0; // The first direction is go right
	int i = 0, j = -1;
	while (currentPosition < n*m) {
		if (currentDirection == 0 || currentDirection == 1) {
			while (i * abs(direction[currentDirection][0]) + j * abs(direction[currentDirection][1]) <= border[currentDirection]) {
				i += direction[currentDirection][0];
				j += direction[currentDirection][1];
				cout << i << " " << j  << "\n ";
				answer[currentPosition] = a[i][j];
				currentPosition++;
			}
		} else {
			while (i * abs(direction[currentDirection][0]) + j * abs(direction[currentDirection][1]) >= border[currentDirection]) {
				i += direction[currentDirection][0];
				j += direction[currentDirection][1];
				cout << i << " " << j  << "\n ";
				answer[currentPosition] = a[i][j];
				currentPosition++;
			}
		}
		i -= direction[currentDirection][0];
		j -= direction[currentDirection][1];
		cout << "out of loop\n";
		border[currentDirection] -= (currentDirection == 0 || currentDirection == 1) ? 1 : -1;
		currentDirection = (currentDirection + 1) % 4;
	}

	for (int i = 0; i < n*m; i++) {
		cout << answer[i] << " ";
	}
}

void output(int a[][MAX], int &n, int &m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << left << a[i][j];
		cout << "\n";
	}
}
