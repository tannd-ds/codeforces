#include <iostream>
#include <string>
using namespace std;

string dec2Bin(long long n) {
	string ans = "";
	while (n > 0) {
		int remainder = n % 2;
		if (remainder == 0)
			ans = "0" + ans;
		else
			ans = "1" + ans;
		n /= 2;
	}
	return ans;
}

int main() {

	int n_testcase;
	cin >> n_testcase;
	for (int i = 0; i < n_testcase; i++) {
		long long n;
		cin >> n;
		cout << dec2Bin(n) << "\n";
	}

	return 0;
}
