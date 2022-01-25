#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		unsigned long long a, b;
		cin >> a >> b;
		cout << b * (a/b + (a % b != 0)) - a << "\n";
	}

	return 0;
}
