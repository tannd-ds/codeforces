#include<bits/stdc++.h>
#include<cstdlib>

using std::cin;
using std::cout;

// Slide 1 Functions
void input(int a[], int &n);
void generateRandomArray(int a[], int n);
void output(int a[], int n);
void max(int a[], int n);
void min(int a[], int n);
void minPositive(int a[], int n);
void maxNegative(int a[], int n);
int  popIndex(int a[], int &n);
// Slide 2 Functions
void popValue(int a[], int &n);
int  sum(int a[], int n);
int  findX(int a[], int n);
void sort(int a[], int n, int w);
void outputInverse(int a[], int n);
void push(int a[], int &n);
void countAndSumPositive(int a[], int n);
bool isPalindrome(int a[], int n);
bool isSorted(int a[], int n);
// Support Function
void chooseOption(int a[], int &n);

int main() {
    int a[100], n;

    input(a, n);
    output(a, n);
	chooseOption(a, n);

    return 0;
}

void chooseOption(int a[], int &n) {
	float c;
	cout << "|-----------------------------------------------------------\n";
	cout << "| 1    | Nhap vao 1 mang\n";
	cout << "| 2    | Khoi tao mang ngau nhien\n";
	cout << "| 3    | Xuat mang ra man hinh\n";
	cout << "| 4.1  | Tim phan tu lon nhat va so lan xuat hien\n";
	cout << "| 4.2  | Tim phan tu nho nhat va so lan xuat hien\n";
	cout << "| 5    | Vi tri phan tu duong nho nhat\n";
	cout << "| 6    | Vi tri phan tu am lon nhat\n";
	cout << "| 7    | Xoa phan tu tai vi tri K\n";
	cout << "| 9    | Xoa tat ca phan tu gia tri X\n";
	cout << "| 10   | Tinh tong cac phan tu\n";
	cout << "| 11   | Tim vi tri phan tu X\n";
	cout << "| 12.1 | Sap xep mang tang dan\n";
	cout << "| 12.2 | Sap xep mang giam dan\n";
	cout << "| 13   | Xuat day dao nguoc\n";
	cout << "| 14   | Them phan tu X vao vi tri K\n";
	cout << "| 15   | Dem so phan tu duong, in ra tong cac phan tu duong\n";
	cout << "| 16   | Kiem tra mang co doi xung khong?\n";
	cout << "| 17   | Kiem tra mang co sap thu tu tang khong?\n";
	cout << "|-----------------------------------------------------------\n";
	cout << "Nhap 1 so: ";
	cin >> c;
	switch(int(c)) {
		case 1 : input(a, n); break;
		case 2 : input(a, n); break;
		case 3 : output(a, n); break;
		case 4 :
			switch(int(c*10) % 10) {
				case 1: max(a, n); break;
				case 2: min(a, n); break;
			}
			break;
		case 5 : minPositive(a, n); break;
		case 6 : maxNegative(a, n); break;
		case 7 : popIndex(a, n); break;
		case 9 : popValue(a, n); break;
		case 10: sum(a, n); break;
		case 11: cout << findX(a, n); break;
		case 12:
			switch(int(c*10) % 10) {
				case 1: sort(a, n,  1); break;
				case 2: sort(a, n, -1); break;
			}
			break;
		case 13: outputInverse(a, n); break;
		case 14: push(a, n); break;
		case 15: countAndSumPositive(a, n); break;
		case 16: isPalindrome(a, n); break;
		case 17: isSorted(a, n); break;
	}
}

void input(int a[], int &n) {
	char c;
	cout << "Nhap N: ";
	cin >> n;
	cout << "Sinh mang ngau nhien? (Y/n) ";
	cin >> c;
	if (tolower(c) == 'y')
		generateRandomArray(a, n);
	else
		for (int i = 0; i < n; i++) {
			cout << "Nhap phan tu thu " << i << ": ";
			cin >> a[i];
		}
}

void output(int a[], int n) {
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void generateRandomArray(int a[], int n) {
	srand(42);
	for (int i=0; i<n; i++)
		a[i] = rand() % 200 - 100;
}

void max(int a[], int n) {
	int max = INT_MIN, cnt = 0;
	for (int i=0; i<n; i++)
		if (a[i] > max) max = a[i];
	for (int i=0; i<n; i++)
		if (a[i] == max) cnt++;
	cout << "Gia Tri Lon Nhat: " << max << "\nSo Lan Xuat Hien: " << cnt << "\n";
}

void min(int a[], int n) {
	int min = INT_MAX, cnt = 0;
	for (int i=0; i<n; i++)
		if (a[i] < min) min = a[i];
	for (int i=0; i<n; i++)
		if (a[i] == min) cnt++;
	cout << "Gia Tri Nho Nhat: " << min << "\nSo Lan Xuat Hien: " << cnt << "\n";
}

void minPositive(int a[], int n) {
	int min = INT_MAX, index = -1;
	for (int i=0; i<n; i++)
		if (a[i] > 0 && a[i] < min) {
			min = a[i];
			index = i;
		}
	if (index == -1)
		cout << "Khong Tim Thay Phan Tu Duong Be Nhat\n";
	else
		cout << "Vi Tri Phan Tu Duong Nho Nhat: " << index << "\n";
}

void maxNegative(int a[], int n) {
	int max = INT_MIN, index = -1;
	for (int i=0; i<n; i++)
		if (a[i] < 0 && a[i] > max) {
			max = a[i];
			index = i;
		}
	if (index == -1)
		cout << "Khong Tim Thay Phan Tu Am Lon Nhat\n";
	else
		cout << "Vi Tri Phan Tu Am Lon Nhat: " << index << "\n";
}

int popIndex(int a[], int &n) {
	int index;
	cout << "Nhap vi tri muon xoa: ";
	cin  >> index;
	if (index < 0 || index >= n) return 0;
	for (int i=index; i<n-1; i++)
		a[i] = a[i+1];
	n--;
	output(a, n);
	return 1;
}

void popValue(int a[], int &n) {
	int x;
	cout << "Nhap gia tri X muon xoa: ";
	cin  >> x;
	/*
	int step = 0;
	for (int i=0; i<n; i++) {
		if (a[i] == x)
		step++;
		else
			a[i-step] = a[i];
	}
	n -= step;
	*/
	int i = 0, j = 0;
	while (j < n) {
		while (a[j] == x) j++;
	 	a[i] = a[j];
	 	i++;
		j++;
	}
	n = i;
	output(a, n);
}

int sum(int a[], int n) {
	int s = 0;
	for (int i=0; i<n; i++)
		s += a[i];
	return s;
}


int findX(int a[], int n) {
	int x, i=0;
	cout << "Nhap gia tri X can tim: ";
	cin >> x;
	while (a[i] != x && i < n) i++;
	return (a[i] == x) * i + (a[i] != x) * (-1);
}

void swap(int &x, int &y) {
	x = x + y;
	y = x - y;
	x = x - y;
}

void sort(int a[], int n, int w){
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (w*a[j] < w*a[i]) swap(a[i], a[j]);
	output(a, n);
}

void outputInverse(int a[], int n) {
    for(int i = n-1; i >= 0; i--){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void push(int a[], int &n) {
	int x, k;
	cout << "Nhap X va K: ";
	cin >> x >> k;
	for (int i=n; i>k; i--)
		a[i] = a[i-1];
	a[k] = x;
	n++;
	output(a, n);
}

void countAndSumPositive(int a[], int n) {
	int sum = 0, cnt = 0;
	for (int i=0; i<n; i++)
		if (a[i] > 0) {
			cnt++;
			sum += a[i];
		}
	cout << "So phan tu duong: " << cnt << "\nTong cac phan tu duong: " << sum;
}

bool isPalindrome(int a[], int n) {
	int i=0;
	while (i <= (n+1)/2 && a[i] == a[n-i-1]) i++;
	if (i > (n+1)/2)
		cout << "Mang doi xung\n";
	else
		cout << "Mang khong doi xung\n";
	return i > (n+1)/2;
}

bool isSorted(int a[], int n) {
	int w = (a[0] < a[1]) ? 1 : -1;
	int i=2;
	while (i < n && w*a[i-1] < w*a[i]) i++;
	if (i == n)
		cout << "Mang sap xep\n";
	else
		cout << "Mang khong sap xep\n";
	return i == n;
}
