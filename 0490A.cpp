// Codeforces problem: http://codeforces.com/contest/490/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> programmingStudent(0);
	vector<int> mathStudent(0);
	vector<int> peStudent(0);
	for (int i = 0; i < n; i++) {
		int student;
		cin >> student;
		if (student == 1) {
			programmingStudent.push_back(i);
		}
		else if (student == 2) {
			mathStudent.push_back(i);
		}
		else {
			peStudent.push_back(i);
		}
	}
	int w = min(programmingStudent.size(), min(mathStudent.size(), peStudent.size()));

	// Print Answer
	cout << w << endl;
	for (int i = 0; i < w; i++)
		cout << programmingStudent[i] + 1 << " " << mathStudent[i] + 1 << " " << peStudent[i] + 1 << endl;

	return 0;
}
