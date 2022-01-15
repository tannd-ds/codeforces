#include <iostream>
using std::cin;
using std::cout;

void inputArray(int a[], int &n);
void outputPrime(int a[], int n);
void generateRandomArray(int a[], int n);
bool isPrime(int x);

int main() {
	int a[101], n;
	inputArray(a, n);
	outputPrime(a, n);
	return 0;
}

void inputArray(int a[], int &n) {
	cout << "Nhap N: ";
	cin  >> n;
	char c;
	cout << "Tao Mang Ngau Nhien? (y/n): ";
	cin  >> c;
	if (c == 'n')
		for (int i=0; i<n; i++)
			cin >> a[i];
	else
		generateRandomArray(a, n);
}

void outputPrime(int a[], int n) {
	for (int i=0; i<n; i++)
		if (isPrime(a[i]))
			cout << a[i] << " ";
	cout << "\n";
}

void generateRandomArray(int a[], int n) {
	srand(42);
	for (int i=0; i<n; i++)
		a[i] = rand() % 100;
}

bool isPrime(int x) {
	if (x == 2 || x == 3) return 1;
	if (x == 1 || x % 2 == 0 || x % 3 == 0) return 0;
	for (int i=2; i*i <= x; i++)
		if (x % i == 0) return 0;
	return 1;
}
