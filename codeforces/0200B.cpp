#include <iostream>
using namespace std;

int main() {

	int numberOfDrinks;
	double volumAverage;
	cin >> numberOfDrinks;

	for (int i = 0; i < numberOfDrinks; i++) {
		double volume;
		cin >> volume;
		volumAverage += volume;
	}
	volumAverage /= numberOfDrinks;

	cout << volumAverage;

	return 0;
}
