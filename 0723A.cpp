// Codeforces problem: http://codeforces.com/contest/723/problem/A
#include <iostream>
using namespace std;

int main() {
	int x[3];
	cin >> x[0] >> x[1] >> x[2];
	int nearestX = min(x[0], min(x[1], x[2]));
	int farthesX = max(x[0], max(x[1], x[2]));
	int middleX = x[0] + x[1] + x[2] - nearestX - farthesX;
	int distanceFromNearest = abs(nearestX - middleX);
	int distanceFromFarthes = abs(farthesX - middleX);
	int optimalDistance = distanceFromFarthes + distanceFromNearest;
	cout << optimalDistance;
	return 0;
}
