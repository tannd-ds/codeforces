#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;


int main() {

	int n_testcase;
	cout << "Number of Testcase: ";
	cin >> n_testcase;
	srand(time(NULL));
	for (int testcase = 0; testcase < n_testcase; testcase++) {
		int n = rand() % 100 + 1;
		int m = rand() % 100 + 1;
		string filename = "file_";
		filename.push_back(char(testcase + 48));
		ofstream fo(filename);
		fo << n << " " << m << "\n";

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				fo << rand() % 50 + 1 << " ";
			fo << "\n";
		}
	}

	return 0;
}
