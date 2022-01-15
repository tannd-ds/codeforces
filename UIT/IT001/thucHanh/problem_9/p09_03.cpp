#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
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

bool printCurrent(double coeff, int exp, int i) {
	bool printSign = true;
	bool printCoeff = true;
	bool printX = true;
	bool printExp = true;

	if (coeff == 0) return false;
	if (i == 0 && coeff > 0)
		printSign = false;
	if (abs(coeff) == 1 && exp > 0)
		printCoeff = false;
	if (exp < 2)
		printExp = false;
	if (exp < 1)
		printX = false;
	if (printSign)
		(coeff > 0) ? cout << "+" : cout << "-";
	if (printCoeff)
		cout << abs(coeff);
	if (printX)
		cout << "x";
	if (printExp)
		cout << "^" << exp;
	return (printSign || printCoeff || printX || printExp);
}

void Xuat(DATHUC B) {
	bool printed = false;
	for (int i = 0; i < B.len; i++) {
		printed = printCurrent(B.heSo[i], B.soMu[i], i) || printed;
	}
	if (!printed) cout << "0";
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

