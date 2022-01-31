#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int testcase = 0; testcase < t; testcase++) {
		int n;
		cin >> n;
		cout << ((n-1)/2) << "\n";
	}
	return 0;
}
