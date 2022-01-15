#include <iostream>
using std::cin;
using std::cout;

void inputArray(int a[], int &n);
void outputArray(int a[], int n);
void generateRandomArray(int a[], int n);
bool isPalindrome(int a[], int n);

int main() {
	int a[101], n;
	inputArray(a, n);
	outputArray(a, n);

	if (isPalindrome(a, n))
		cout << "La Mang doi xung\n";
	else
		cout << "Khong la Mang doi xung\n";

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

void outputArray(int a[], int n) {
	for (int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

void generateRandomArray(int a[], int n) {
	srand(42);
	for (int i=0; i<n; i++)
		a[i] = rand() % 100;
}

bool isPalindrome(int a[], int n) {
    int i=0;
    while (i <= (n+1)/2 && a[i] == a[n-i-1]) i++;
    return i > (n+1)/2;
}

