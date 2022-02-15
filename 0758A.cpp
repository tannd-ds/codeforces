// Codeforces Problem: http://codeforces.com/contest/758/problem/A
#include <iostream>
using namespace std;

int findMaxWelfare(int a[], int n) {
	int maxWelfare = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxWelfare)
			maxWelfare = a[i];
	}
	return maxWelfare;
}

int main() {
	int numberOfCitizens;
	int *welfares = new int[numberOfCitizens];
	cin >> numberOfCitizens;
	for (int i = 0; i < numberOfCitizens; i++)
		cin >> welfares[i];

	int targetWelfare = findMaxWelfare(welfares, numberOfCitizens);

	int numberOfBurles = 0;
	for (int i = 0; i < numberOfCitizens; i++) {
		numberOfBurles += targetWelfare - welfares[i];
	}
	cout << numberOfBurles;

	return 0;
}
