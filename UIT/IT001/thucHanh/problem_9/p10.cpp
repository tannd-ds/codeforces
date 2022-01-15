#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DATHUC {
	int len;
	double heSo[102];
	int soMu[102];
};

DATHUC a, b;
bool isReadOnce = false;

DATHUC *Nhap() {
	if (!isReadOnce) {
		cin >> a.len;
		for (int i = 0; i < a.len; i++)
			cin >> a.heSo[i] >> a.soMu[i];
		isReadOnce = true;
	} else {
		cin >> b.len;
		for (int i = 0; i < b.len; i++)
			cin >> b.heSo[i] >> b.soMu[i];
		return &b;
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

DATHUC Tong2DaThuc(DATHUC *A, DATHUC *B) {
	DATHUC a = *A, b = *B, c; // A, B are pointer, assign its value to a, b

	// using 2 pointer technique in merging 2 sorted array
	int aP = 0, bP = 0, cP = 0;
	while (aP < a.len || bP < b.len) {
		if (a.soMu[aP] == b.soMu[bP]) {
			c.heSo[cP] = a.heSo[aP] + b.heSo[bP];
			c.soMu[cP] = a.soMu[aP];
			aP++;
			bP++;
		} else if (a.soMu[aP] > b.soMu[bP]) {
			c.heSo[cP] = a.heSo[aP];
			c.soMu[cP] = a.soMu[aP];
			aP++;
		} else {
			c.heSo[cP] = b.heSo[bP];
			c.soMu[cP] = b.soMu[bP];
			bP++;
		}
		cP++;
	}

	c.len = cP;
	return c;
}

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
