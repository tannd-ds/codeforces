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

//void Xuat(DATHUC B) {
//	bool hasNothing = true;
//	for (int i = 0; i < B.len; i++)
//		if (B.heSo[i] != 0) {
//			hasNothing = false;
//			break;
//		}
//	if (hasNothing)
//		cout << "0";
//	else {
//		int i = 0;
//		while (i < B.len) {
//			while (B.heSo[i] == 0) i++;
//			if (i >= B.len) break;
//			if (B.heSo[i] >= 0)
//				(i == 0) ? cout << "" : cout << "+";
//			else
//				cout << "-";
//			double 	a = abs(B.heSo[i]);
//			int		b = B.soMu[i];
//			if (a != 1)
//				cout << a;
//			if (b == 0) {
//				if (a == 1)
//					cout << 1;
//			}
//			else if (b == 1)
//				cout << "x";
//			else  {
//				cout << "x^" << b;
//			}
//			i++;
//		}
//	}
//}

void printCurrent(double a, int b, int i) {
	// Print current sign
	if (a >= 0) {
		if (i != 0) // Prevent print "+" sign in the begin of the fomula
			cout << "+";
	} else {
		cout << "-";
		a = abs(a);
	}

	if (a == 0)
		cout << "";
	else if (a == 1 && b == 0)
		cout << 1;
	else if (a == 1 && b == 1)
		cout << "x";
	else if (a == 1 && b != 0 && b != 1)
		cout << "x^" << b;
	else if (a != 1 && b == 0)
		cout << a;
	else {
		cout << a << "x^" << b;
	}
}

void Xuat(DATHUC B) {
	string result = "";
	for (int i = 0; i < B.len; i++) {
		if (B.heSo[i] == 0) continue;
		printCurrent(B.heSo[i], B.soMu[i], i);

	}
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

