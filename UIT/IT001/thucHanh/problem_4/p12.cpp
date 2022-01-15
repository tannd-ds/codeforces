#include <iostream>
using namespace std;

int main() {
	int n, cnt=0;
	bool is_prime[1001]; 
	cin >> n;

	for (int i=1; i<=n; i++)
		is_prime[i] = true;

	for (int i=2; i<=n; i++)
		if (is_prime[i])
			for (int j=2; i*j<=n; j++)
				is_prime[i*j] = false;

	for (int i=2; i<=n-2; i++)
		if (is_prime[i] && is_prime[i+2]) {
			cout << i << ", " << i+2 << "\n";
			cnt++;
		}
	cout << "Tong: "  << cnt << " cap so sinh doi < " << n; 

	return 0;
}
