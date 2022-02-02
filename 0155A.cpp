#include <iostream>
#include <climits>
using namespace std;

int main() {

	int n;
	cin >> n;

	int contests[1000], amazingPerformanceCount = 0;
	cin >> contests[0];
	int best = contests[0], worst = contests[0];
	for (int i = 1; i < n; i++) {
		cin >> contests[i];
		if (contests[i] > best) {
			best = contests[i];
			amazingPerformanceCount++;
		} else if (contests[i] < worst) {
			worst = contests[i];
			amazingPerformanceCount++;
		}
	}

	cout << amazingPerformanceCount;

	return 0;
}
