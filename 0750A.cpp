#include <iostream>
using namespace std;

int main() {

	int problems, timeToTheParty;
	cin >> problems >> timeToTheParty;

	int problemsSolved = 0;
	int timeToSolveProblem = 0;

	// From 20:00 to 00:00, we got 240 minutes
	while (problemsSolved < problems && timeToTheParty + timeToSolveProblem + (5 * (problemsSolved + 1)) <= 240) {
		problemsSolved++;
		timeToSolveProblem += 5 * problemsSolved;
	}

	cout << problemsSolved;

	return 0;
}
