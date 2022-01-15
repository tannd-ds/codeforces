#include <iostream>
using namespace std;

void solve(unsigned long long int n);

int main() {

	unsigned long long int n;
	cin >> n;
	solve(n);

	return 0;
}

void solve(unsigned long long int n) {
	int cnt = 0;
	while (n > 0) {
		if (n % 10 == 7 || n % 10 == 4)
			cnt++;
		n /= 10;
	}
	if (cnt == 4 || cnt == 7)
		cout << "YES";
	else
		cout << "NO";
}
