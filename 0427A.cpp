// Codeforces problem: http://codeforces.com/contest/427/problem/A
#include <iostream>
using namespace std;

int main() {

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int events;
	cin >> events;

	int freePolice = 0;
	int crimeUntreated = 0;
	for (int i = 0; i < events; i++) {
		bool crimeOcurred = false;
		int event;
		cin >> event;

		if (event == -1)
			crimeOcurred = true;

		if (crimeOcurred) {
			if (freePolice > 0)
				freePolice--;
			else
				crimeUntreated++;
		} else
			freePolice += event;
	}

	cout << crimeUntreated << endl;

	return 0;
}
