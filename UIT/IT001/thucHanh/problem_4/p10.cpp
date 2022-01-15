#include <iostream>
using namespace std;

int main() {
	int a, b, n, sum = 0;
	cin >> a >> b >> n;

	for (int i=1; i<=n; i++) {
		sum += a++ * b++;
	}
	cout << sum << "\n";
}
