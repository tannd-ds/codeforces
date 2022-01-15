#include <iostream>
#include <climits>
using std::cin;
using std::cout;

void inputArray(int a[], int &n);
void outputArray(int a[], int n);
void generateRandomArray(int a[], int n);
int maxNegative(int a[], int n);

int main() {
	int a[101], n;
	inputArray(a, n);
	outputArray(a, n);

	int index = maxNegative(a, n);
    if (index == -1)
        cout << "Khong Tim Thay Phan Tu Am Lon Nhat\n";
    else
        cout << "Vi Tri Phan Tu Am Lon Nhat: " << index << "\n";

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
		a[i] = rand() % 200 - 100;
}

int maxNegative(int a[], int n) {
    int max = INT_MIN, index = -1;
    for (int i=0; i<n; i++)
        if (a[i] < 0 && a[i] > max) {
            max = a[i];
            index = i;
        }
	return index;
}
