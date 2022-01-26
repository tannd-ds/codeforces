#include <iostream>
using namespace std;

int main() {

	int n;
	int h[30], g[30];
	int ans = 0;
	cin >> n;
	for (int i =0; i<n; i++) {
		cin >> h[i] >> g[i];
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<i; j++) {
			if (h[i] == g[j])
				ans++;
		}
		for (int j=i+1; j<n; j++) {
			if (h[i] == g[j])
				ans++;
		}
	}

	cout << ans;

	return 0;
}
