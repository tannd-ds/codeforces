#include <iostream>
using namespace std;

int main() {
	int numberOfGames;
	cin >> numberOfGames;
	int mishkaScore = 0, chrisScore = 0;
	for (int i = 0; i < numberOfGames; i++) {
		int mishkaCurrentDice, chrisCurrentDice;
		cin >> mishkaCurrentDice >> chrisCurrentDice;
		if (mishkaCurrentDice > chrisCurrentDice) {
			mishkaScore++;
		}
		else if (mishkaCurrentDice < chrisCurrentDice) {
			chrisScore++;
		}
	}
	if (mishkaScore > chrisScore) {
		cout << "Mishka" << endl;
	}
	else if (mishkaScore < chrisScore) {
		cout << "Chris" << endl;
	}
	else {
		cout << "Friendship is magic!^^" << endl;
	}
	return 0;
}
