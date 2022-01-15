#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::setw;

void nhap(float A[][100], int &N, int &M);
void xuat(float A[][100], int N, int M);
void generateRandomArray(float a[][100], int N, int M);
float det(float A[][100], int n, int start);

int main() {
	float a[100][100];
	int n, m, x;
	nhap(a, n, m);
	xuat(a, n, m);
	cout << "Dinh thuc cua Ma tran det(A) = " << det(a, 0, n) << "\n";
	return 0;
}

void nhap(float A[][100], int &N, int &M) {
	cout << "Nhap so hang - cot: ";
	cin >> N >> M;
	char c;
	cout << "Tao mang ngau nhien? (y/n): ";
	cin >> c;
	if (c == 'n')
		for (int i=0; i<N; i++)
			for (int j=0; j<M; j++) {
				cout << "Nhap phan tu [" << i << "-" << j << "]: ";
				cin >> A[i][j];
			}
	else
		generateRandomArray(A, N, M);
}

void xuat(float A[][100], int N, int M) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++)
			cout << setw(4) << A[i][j];
		cout << "\n";
	}
}

void generateRandomArray(float a[][100], int N, int M) {
	srand(time(NULL));
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			a[i][j] = rand() % 10;
}

void swap(float a, float b) {
	float c = a;
	a = b;
	b = c;
}


float det(float A[][100], int start, int n) {
	if (n - start <= 2) return A[start][start] * A[start+1][start+1] - A[start+1][start] * A[start][start+1];

	// Swap the first row with cth row if needed
	int c = start;
	while (c < n && A[c][start] == 0) c++;
	if (c == n) return 0;
	if (c != start)
		for (int i=start; i<n; i++)
			swap(-A[start][i], A[c][i]);

	for (int i= start + 1; i < n; i++) {
		float u = A[i][start] / A[start][start];
		for (int j = start; j < n; j++)
			A[i][j] -= u * A[start][j];
	}

	return A[start][start] * det(A, start+1, n);
}
