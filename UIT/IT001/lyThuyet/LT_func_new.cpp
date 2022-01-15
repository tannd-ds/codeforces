#include <iostream>
using std::cout;
using std::cin;

float slide1(int n, int x);
float slide2(int n, int x);

long partialSum(int);
long pow(int, int);
long fac(int);

int main() {
	int n, x, c;
	cout << "Nhap N va X: ";
	cin  >> n >> x;
	cout << "Chon Slide Bai Tap (1, 2): ";
	cin >> c;
	if (c == 1)
		cout << slide1(n, x);
	else
		cout << slide2(n, x);
	return 0;
}

long partialSum(int n) {
	int s = 0;
	for (int i=1; i<=n; i++)
		s += i;
	return s;
}

long pow(int x, int n) {
	long s = 1;
	if (n==0) return 1;
	for (int i=1; i<=n; i++)
		s *= x;
	return s;
}

long fac(int n) {
	long s=1;
	for (int i=2; i<=n; i++)
		s *= i;
	return s;
}

float slide1(int n, int x) {
	float s = 0;
	int c;
	cout << "Chon cau (1-6): ";
	cin >> c;
	switch (c) {
		case 1:
			for (int i=1; i<=n; i++)
				s += 1.0/(float)partialSum(i);
			break;
		case 2:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, i)/partialSum(i);
			break;
		case 3:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, i)/fac(i);
			break;
		case 4:
			for (int i=0; i<=n; i++)
				s += (float)pow(x, 2*i)/fac(2*i);
			break;
		case 5:
			for (int i=0; i<=n; i++)
				s += (float)pow(x, 2*i+1)/fac(2*i+1);
			s++;
			break;
		case 6:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, 2*i)/partialSum(2*i);
			break;
	}
	return s;
}

float slide2(int n, int x) {
	float s = 0;
	int c;
	cout << "Chon cau (1-8): ";
	cin >> c;
	switch (c) {
		case 1:
			for (int i=1; i<=n; i++)
				s += pow(-1, i+1) * pow(x, i);
			break;
		case 2:
			for (int i=1; i<=n; i++)
				s += pow(-1, i) * pow(x, 2*i);
			break;
		case 3:
			for (int i=0; i<=n; i++)
				s += pow(-1, i) * pow(x, 2*i+1);
			break;
		case 4:
			for (int i=1; i<=n; i++)
				s += pow(-1, i+1) * 1.0/partialSum(i);
			break;
		case 5:
			for (int i=1; i<=n; i++)
				s += pow(-1, i) * (float)pow(x, i) / partialSum(i);
			break;
		case 6:
			for (int i=1; i<=n; i++)
				s += pow(-1, i) * (float)pow(x, i) / fac(i);
			break;
		case 7:
			for (int i=1; i<=n; i++)
				s += pow(-1, i+1) * (float)pow(x, 2*i) / fac(2*i);
			break;
		case 8:
			for (int i=1; i<=n; i++)
				s += pow(-1, i+1) * (float)pow(x, 2*n+1) / fac(2*n+1);
	}
	return s;
}
