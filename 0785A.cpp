#include <iostream>
#include <map>
using namespace std;

void ver1() {
	int n, faces = 0;
	string _;
	cin >> n;
	getline(cin, _);

	for (int i = 0; i < n; i++) {
		string poly;
		getline(cin, poly);
		switch (poly[0]) {
			case 'T':
				faces += 4;
				break;
			case 'C':
				faces += 6;
				break;
			case 'O':
				faces += 8;
				break;
			case 'D':
				faces += 12;
				break;
			case 'I':
				faces += 20;
				break;
		}
	}

	cout << faces;
}

void ver2() {
	map<string, int> figures {
		{"Tetrahedron", 4},
		{"Cube", 6},
		{"Octahedron", 8},
		{"Dodecahedron", 12},
		{"Icosahedron", 20}
	};

	int n, faces = 0;
	string _;
	cin >> n;
	getline(cin, _);

	for (int i = 0; i < n; i++) {
		string figure;
		getline(cin, figure);
		faces += figures[figure];
	}

	cout << faces;
}

int main() {
	ver2();
	return 0;
}
