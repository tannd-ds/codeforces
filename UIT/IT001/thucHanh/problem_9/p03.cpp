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

void Nhap(PhanSo &a) {
	cin >> a.tu >> a.mau;
}

PhanSo Nhap() {
	PhanSo b;
	cin >> b.tu >> b.mau;
	return b;
}

void Xuat(PhanSo p) {
	int a = p.tu, b = p.mau;
	int GCD = toiGian(a, b);
	int sign = ((a > 0 && b < 0) || (a < 0 && b > 0)) ? -1 : 1;
	a = abs(a);
	b = abs(b);
	if (a == 0)
		cout << 0 << "\n";
	else if (b/GCD == 1)
		cout << sign * a/GCD << "\n";
	else
		cout << sign * a/GCD << "/" << b/GCD << "\n";
}

PhanSo Cong(PhanSo a, PhanSo b) {
	int GCD = toiGian(a.mau, b.mau);
	int LCM = a.mau * b.mau / GCD;
	a.tu = a.tu * LCM / a.mau;
	a.mau = a.mau * LCM / a.mau;
	b.tu = b.tu * LCM / b.mau;
	b.mau = b.mau * LCM / b.mau;

	a.tu = a.tu + b.tu;
	return a;
}

int main() {
	PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}

