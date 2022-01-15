#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DATHUC {
	int len;
	double heSo[102];
	int soMu[102];
};

DATHUC a;

DATHUC *Nhap() {
	cin >> a.len;
	for (int i = 0; i < a.len; i++) {
		cin >> a.heSo[i] >> a.soMu[i];
	}
	return &a;
}

void Xuat_1(double coeff, int exp, int i, int signStart) {
	if (coeff == 0) return;
	// Sign
	if (coeff > 0 && i > signStart)
		cout << "+";
	else if (coeff < 0)
		cout << "-";
	// Coefficients & their Exponents
	double absCoeff = abs(coeff);
	if (absCoeff == 1 && exp == 0)
		cout << 1;
	else if (absCoeff == 1 && exp == 1)
		cout << "x";
	else if (absCoeff == 1 && exp != 0 && exp != 1)
		cout << "x^" << exp;
	else if (exp == 0)
		cout << absCoeff;
	else if (exp == 1)
		cout << absCoeff << "x";
	else
		cout << absCoeff << "x^" << exp;
}

void Xuat(DATHUC B) {
	bool hasNothing = true;
	for (int i = 0; i < B.len; i++)
		if (B.heSo[i] != 0) {
			hasNothing = false;
			break;
		}
	int signStart = 0;
	while (B.heSo[signStart] == 0) signStart++;
	for (int i = 0; i < B.len; i++) {
		Xuat_1(B.heSo[i], B.soMu[i], i, signStart);
	}
	if (hasNothing) cout << 0;
}

double TinhDaThuc(DATHUC B, double x) {
	double result = 0;
	for (int i = 0; i < B.len; i++) {
		result += B.heSo[i] * pow(x, B.soMu[i]);
	}
	return result;
}

int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}

