#include <iostream>
using namespace std;

bool check(int nameCount[], int letterCount[]) {
	for (int i=0; i<255; i++)
		if (nameCount[i] != letterCount[i])
			return false;
	return true;
}

int main() {
	string guestName, hostName, letters;

	getline(cin, guestName);
	getline(cin, hostName);
	getline(cin, letters);

	int nameCount[256] = {0};
	int letterCount[256] = {0};
	for (int i=0; i<guestName.size(); i++)
		nameCount[int(guestName[i])]++;
	for (int i=0; i<hostName.size(); i++)
		nameCount[int(hostName[i])]++;
	for (int i=0; i<letters.size(); i++)
		letterCount[int(letters[i])]++;

	if (check(nameCount, letterCount))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
