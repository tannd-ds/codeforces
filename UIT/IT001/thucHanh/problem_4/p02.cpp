#include <iostream>
using namespace std;

int main() {
	float n; 
	cin >> n;
	cout << (n < 0) * (-n) + (n >= 0) * n; 
	return 0;
}
