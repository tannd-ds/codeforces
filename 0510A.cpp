#include <iostream>
using namespace std;

void drawSnake(int row, int col) {
	int currentRow = 1;
	while (currentRow <= row) {
		if (currentRow % 2 != 0)
			for (int i = 0; i < col; i++)
				cout << "#";
		else {
			if ( (currentRow / 2) % 2 != 0) {
				for (int i = 0; i < col-1; i++)
					cout << ".";
				cout << "#";
			} else {
				cout << "#";
				for (int i = 0; i < col-1; i++)
					cout << ".";
			}
		}
		cout << "\n";
		currentRow++;
	}
}

int main() {

	int n, m;
	cin >> n >> m;

	drawSnake(n, m);

	return 0;
}
