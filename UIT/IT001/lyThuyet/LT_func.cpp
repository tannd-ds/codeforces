#include <iostream>
using std::cout;
using std::cin;

float slide_1(int n, int x);
float slide_2(int n, int x);

float ques1(int n, int x);

float sum_of_n(int);
float pow(int, int);
float fac(int);

int main() {
	int n, x, c;
	cout << "Chon Slide Bai Tap (1, 2): ";
	cin >> c;
	cout << "Nhap N va X: ";
	cin  >> n >> x;
	cout << ques1(n, x);
	if (c == 1)
		cout << slide_1(n, x);
	else
		cout << slide_2(n, x);
	return 0;
}

float sum_of_n(int n) {
	int s = 0;
	for (int i=1; i<=n; i++)
		s += i;
	return s;
}

float pow(int x, int n) {
	long s = 1;
	if (n==0) return 1;
	for (int i=1; i<=n; i++)
		s *= x;
	return s;
}

float fac(int n) {
	long s=1;
	for (int i=2; i<=n; i++)
		s *= i;
	return s;
}

float ques1(int n, int x) {
	if (n == 1) return 1.0/sum_of_n(n);
	return 1.0/sum_of_n(n) + ques1(n-1, x);
}

float slide_1(int n, int x) {
	float s = 0;
	int c;
	cout << "Chon cau (1-6): ";
	cin >> c;
	switch (c) {
		case 1:
			for (int i=1; i<=n; i++)
				s += 1.0/(float)sum_of_n(i);
			break;
		case 2:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, i)/sum_of_n(i);
			break;
		case 3:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, i)/fac(i);
			break;
		case 4:
			for (int i=0; i<=2*n; i+=2)
				s += (float)pow(x, i)/fac(i);
			break;
		case 5:
			for (int i=0; i<=n; i++)
				s += (float)pow(x, 2*i+1)/fac(2*i+1);
			s++;
			break;
		case 6:
			for (int i=1; i<=n; i++)
				s += (float)pow(x, 2*i)/sum_of_n(2*i);
			break;
	}
	return s;
}

float slide_2(int n, int x) {
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
				s += pow(-1, i+1) * 1.0/sum_of_n(i);
			break;
		case 5:
			for (int i=1; i<=n; i++)
				s += pow(-1, i) * (float)pow(x, i) / sum_of_n(i);
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
