#include <iostream>
using namespace std;

int main() {

	int s[4], answer = 0;
	for (int i = 0; i < 4; i++) {
		cin >> s[i];
		for (int j = 0; j < i; j++) {
			if (s[i] == s[j])
				answer++;
		}
	}
	cout << answer;

	return 0;
}
