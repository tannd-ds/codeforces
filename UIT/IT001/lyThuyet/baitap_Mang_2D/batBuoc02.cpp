#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::setw;

void inputArray(float a[][101], int &aRow, int &aCol);
void outputArray(float a[][101], int aRow, int aCol);
void outputMultiply(float a[][101], float b[][101], int aRow, int aCol, int bRow, int bCol);
void generateRandomArray(float a[][101], int aRow, int aCol);

int main() {
	int aRow, aCol, bRow, bCol;
	float a[101][101], b[101][101];

	inputArray(a, aRow, aCol);
	inputArray(b, bRow, bCol);

	outputArray(a, aRow, aCol);
	outputArray(b, bRow, bCol);

	outputMultiply(a, b, aRow, aCol, bRow, bCol);

	return 0;
}

void inputArray(float a[][101], int &aRow, int &aCol) {
	cout << "Nhap so hang - cot: ";
	cin >> aRow >> aCol;
	char c;
	cout << "Tao mang ngau nhien? (y/n): ";
	cin >> c;
	if (c == 'n')
		for (int i=0; i<aRow; i++)
			for (int j=0; j<aCol; j++) {
				cout << "Nhap phan tu [" << i << "-" << j << "]: ";
				cin >> a[i][j];
			}
	else
		generateRandomArray(a, aRow, aCol);
}

void outputArray(float a[][101], int aRow, int aCol) {
	for (int i=0; i<aRow; i++) {
		for (int j=0; j<aCol; j++)
			cout << std::setw(4) << a[i][j];
		cout << "\n";
	}
	cout << "\n";
}

void outputMultiply(float a[][101], float b[][101], int aRow, int aCol, int bRow, int bCol) {
	if (aCol != bRow) {
		cout << "Khong the nhan.\n";
		return;
	}
	cout << "Tich 2 ma tran tren: \n";
	for (int i = 0; i < aRow; i++) {
        for (int j = 0; j < bCol; j++) {
            float c = 0;
            for (int x = 0; x < aCol; x++){
                c += a[i][x] * b[x][j];
            }
            cout << setw(6) << c << " ";
        }
        cout << "\n";
    }

}

void generateRandomArray(float a[][101], int aRow, int aCol) {
	srand(time(NULL));
	for (int i=0; i<aRow; i++)
		for (int j=0; j<aCol; j++)
			a[i][j] = rand() % 100;
}
