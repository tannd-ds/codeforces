#include <iostream>
using namespace std;

bool wasHarmed[1000000] = {false};

int harmThisDragon(int k, int d) {
	int multiply = 1;
	int numberOfHarmed = 0;
	while (multiply * k <= d) {
		if (!wasHarmed[multiply * k]) {
			wasHarmed[multiply * k] = true;
			numberOfHarmed++;
		}
		multiply++;
	}
	return numberOfHarmed;
}

int main() {

	int k, l, m, n, d, ans = 0;
	cin >> k >> l >> m >> n >> d;

	ans = harmThisDragon(k, d) + harmThisDragon(l, d) + harmThisDragon(m, d) + harmThisDragon(n, d);
	cout << ans;

	return 0;
}
