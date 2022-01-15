#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "INF";
            else
                cout << "NO";
        } else {
			if (c == 0)
				cout << fixed << setprecision(2) << 0.00;
			else
				cout << fixed << setprecision(2) << -c/b;
        }
    } else {
        double d = b*b - 4*a*c;

        if (d < 0)
            cout << "NO";
        else if (d == 0)
			cout << fixed << setprecision(2) << -b/(2*a);
        else if (d > 0)
			cout << fixed << setprecision(2) << (-b - sqrt(d)) / (2*a) << " " << (-b + sqrt(d)) / (2*a);
    }
    return 0;
}

