#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::setw;

void inputArray(float a[][101], int &aRow, int &aCol);
void outputArray(float a[][101], int aRow, int aCol);
void outputSum(float a[][101], float b[][101], int aRow, int aCol, int bRow, int bCol);
void generateRandomArray(float a[][101], int aRow, int aCol);

int main() {
	int aRow, aCol, bRow, bCol;
	float a[101][101], b[101][101];

	inputArray(a, aRow, aCol);
	inputArray(b, bRow, bCol);

	outputArray(a, aRow, aCol);
	outputArray(b, bRow, bCol);

	outputSum(a, b, aRow, aCol, bRow, bCol);

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
			cout << std::setw(4) << a[i][j] << " ";
		cout << "\n";
	}
	cout << "\n";
}

void outputSum(float a[][101], float b[][101], int aRow, int aCol, int bRow, int bCol) {
	if (aRow != bRow || aCol != bCol) {
		cout << "Khong the cong.\n";
		return;
	}
	cout << "Tong 2 ma tran tren: \n";
	for (int i=0; i<aRow; i++) {
        for (int j=0; j<aCol; j++)
            cout << std::setw(4) << a[i][j] + b[i][j] << " ";
        cout << "\n";
    }

}

void generateRandomArray(float a[][101], int aRow, int aCol) {
	srand(time(NULL));
	for (int i=0; i<aRow; i++)
		for (int j=0; j<aCol; j++)
			a[i][j] = rand() % 100;
}
