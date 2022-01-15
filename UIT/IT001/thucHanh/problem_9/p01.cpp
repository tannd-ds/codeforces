#include <iostream>
#include <cmath>
using namespace std;

#define MAXN 101

struct PhanSo {
	int tu;
	int mau;
};

int toiGian(int a, int b) {
	if (a == 0 || b == 0) return 0;
	a = abs(a);
	b = abs(b);
	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

void Nhap(PhanSo a[MAXN], int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].tu >> a[i].mau;
	}
}

void Xuat(PhanSo a[MAXN], int n) {
	for (int i = 0; i < n; i++) {
		int GCD = toiGian(a[i].tu, a[i].mau);
		int sign = ((a[i].tu > 0 && a[i].mau < 0) || (a[i].tu < 0 && a[i].mau > 0)) ? -1 : 1;
		a[i].tu = abs(a[i].tu);
		a[i].mau = abs(a[i].mau);
		if (a[i].mau == 0)
			cout << "Khong thoa yeu cau bai toan\n";
		else if (a[i].tu == 0)
			cout << 0 << "\n";
		else if (a[i].mau/GCD == 1)
			cout << sign * a[i].tu/GCD << "\n";
		else
			cout << sign * a[i].tu/GCD << "/" << a[i].mau/GCD << "\n";
	}
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}


