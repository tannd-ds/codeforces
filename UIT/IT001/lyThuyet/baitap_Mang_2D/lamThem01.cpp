#include <iostream>
using namespace std;

void nhap(int A[][100], int &N, int &M);
void xuat(int A[][100], int N, int M);
void timX(int A[][100], int N, int M, int X);
bool doiXung(int A[][100], int N, int M);
void tongPhanTu(int A[][100], int N, int M);
int  min(int A[][100], int N, int M);
int  max(int A[][100], int N, int M);
bool donVi(int A[][100], int N, int M);

int main() {

	int a[100][100], n, m, x;
	nhap(a, n, m);
	xuat(a, n, m);

	// Tim mot phan tu trong mang
	cout << "Nhap X can tim: ";
	cin  >> x;
	timX(a, n, m, x);

	// Kiem tra mang co doi xung qua duong cheo chinh khong
	cout << "Mang doi xung?: " << doiXung(a, n, m) << "\n";

	// Tinh cac tong
	tongPhanTu(a, n, m);

	// Tim gia tri Lon Nhat va Nho Nhat
	cout << "Gia tri lon nhat trong mang: " << max(a, n, m) << "\n";
	cout << "Gia tri nho nhat trong mang: " << min(a, n, m) << "\n";

	// Kiem tra ma tran don vi
	cout << "Ma tran don vi?: " << donVi(a, n, m) << "\n";

	return 0;
}

void nhap(int A[][100], int &N, int &M) {
	cout << "Nhap N va M: ";
	cin >> N >> M;

	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++) {
			cout << "Nhap phan tu thu [" << i << ", " << j << "]: ";
			cin >> A[i][j];
		}
}

void xuat(int A[][100], int N, int M) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++)
			cout << A[i][j] << " ";
		cout << "\n";
	}
}

void timX(int A[][100], int N, int M, int X) {
	cout << "Cac vi tri co gia tri X=" << X << " la: ";
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			if (A[i][j] == X) cout << "(" << i << ", " << j << ") ";
	cout << "\n";
}

bool doiXung(int A[][100], int N, int M) {
	for (int i=1; i<N; i++)
		for (int j=1; j<=i; j++)
			if (A[i][j] != A[j][i]) return 0;
	return 1;
}

void tongPhanTu(int A[][100], int N, int M) {
	int sum;
	// Tong Dong
	cout << "Tong cac Dong: ";
	for (int i=0; i<N; i++) {
		sum = 0;
		for (int j=0; j<M; j++)
			sum += A[i][j];
		cout << sum << " ";
	}

	// Tong Cot
	cout << "\nTong cac Cot: ";
	for (int i=0; i<N; i++) {
		sum = 0;
		for (int j=0; j<M; j++)
			sum += A[j][i];
		cout << sum << " ";
	}

	// Tong Mang
	cout << "\nTong toan Mang: ";
	sum = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++)
			sum += A[i][j];
	}
	cout << sum << " ";

	// Tong duong cheo chinh
	sum = 0;
	for (int i=0; i<N; i++)
		sum += A[i][i];
	cout << "\nTong duong cheo chinh: " << sum;

	// Tong nua duoi
	sum = 0;
	for (int i=1; i<N; i++)
		for (int j=0; j<i; j++)
			sum += A[i][j];
	cout << "\nTong nua duoi: " << sum;

	// Tong nua tren
	sum = 0;
	for (int i=1; i<N; i++)
		for (int j=0; j<i; j++)
			sum += A[j][i];
	cout << "\nTong nua tren: " << sum << "\n";
}

int min(int A[][100], int N, int M) {
	int min = A[0][0];
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			if (A[i][j] < min) min = A[i][j];
	return min;
}

int max(int A[][100], int N, int M) {
	int max = A[0][0];
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			if (A[i][j] > max) max = A[i][j];
	return max;
}

bool isEye(int A[][100], int N, int M) {
	if (N != M) return 0;
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			continue;
	return 0;
}

bool donVi(int A[][100], int N, int M) {
	if (N != M) return 0;
	for (int i=0; i<N; i++)
		for (int j=0; j<M; j++)
			if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0))
				return 0;
	return 1;
}
