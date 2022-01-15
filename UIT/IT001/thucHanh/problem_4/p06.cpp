#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	if (a < b+c && b < a+c && c < a+b) { 
		if (a*b == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
			cout << "Tam giac vuong";
		else if (a==b && b==c) 
			cout << "Tam giac deu";
		else if (a==b || b==c || a==c)
			cout << "Tam giac can";
		else 
			cout << "Tam giac thuong";
		printf(", dien tich = %.2f", 1.0/4 * sqrt((a+b+c) * (-a+b+c) * (a-b+c) * (a+b-c)));	
	}
	else 
		cout << "Khong phai tam giac";
	return 0;
}
