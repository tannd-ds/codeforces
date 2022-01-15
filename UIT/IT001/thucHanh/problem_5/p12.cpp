#include <iostream>
using namespace std;

int main() {
	int n;
	bool is_prime[1001]; 
	cin >> n;

	for (int i=1; i<=n; i++)
		is_prime[i] = true;

	for (int i=2; i<=n; i++)
		if (is_prime[i])
			for (int j=2; i*j<=n; j++)
				is_prime[i*j] = false;

	int i=2, cnt=0, sum=0;
	while (cnt < n) {
		cout << cnt << " " << n << "\n";
		cnt += is_prime[i];
		sum += is_prime[i] * i;
		i++;
	}
		
	cout << "Tong: "  << cnt << " so nguyen to dau tien la: " << sum; 

	return 0;
}
