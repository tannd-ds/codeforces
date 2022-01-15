#include <iostream>
using namespace std;
#define MAX 100

// Prototype
void Nhapmang(int a[], int &n); 
bool start_with_k(int a, int k); 
bool isBenford(int a[], int n); 

int main() {
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE\n";
	else    cout << "FALSE\n";
	return 0;
}

void Nhapmang(int a[], int &n) {
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
} 
bool start_with_k(int a, int k) {
	while (a > 10) a /= 10;
	return a = k;
} 
bool isBenford(int a[], int n) {
	int cnt_1 = 0, cnt_4 = 0;
	for (int i=0; i<n; i++){
		if (start_with_k(a[i], 1)) cnt_1++;
		if (start_with_k(a[i], 4)) cnt_4++;
		if (cnt_1 == 3 && cnt_4 == 1) break;
	}
	return (cnt_1 == 3 && cnt_4 == 1);
} 