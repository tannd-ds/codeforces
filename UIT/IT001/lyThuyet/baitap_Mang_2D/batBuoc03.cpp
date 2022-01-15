#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::setw;

void inputArray(float a[][101], int &aRow, int &aCol);
void outputArray(float a[][101], int aRow, int aCol);
void outputSum(float a[][101], int aRow, int aCol);
void generateRandomArray(float a[][101], int aRow, int aCol);

int main() {
	int aRow, aCol;
	float a[101][101];

	inputArray(a, aRow, aCol);

	outputArray(a, aRow, aCol);

	outputSum(a, aRow, aCol);

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


void outputSum(float a[][101], int aRow, int aCol) {
	float sum = 0;
	cout << "Cac gia tri lon nhat tren moi dong: ";
	for (int i=0; i<aRow; i++) {
		float max = a[i][0];
        for (int j=0; j<aCol; j++)
			if (a[i][j] > max) max = a[i][j];
        cout << max << " ";
		sum += max;
    }
	cout << "\nTong cac gia tri lon nhat tren moi dong: " << sum << "\n";
}

void generateRandomArray(float a[][101], int aRow, int aCol) {
	srand(time(NULL));
	for (int i=0; i<aRow; i++)
		for (int j=0; j<aCol; j++)
			a[i][j] = rand() % 100;
}
