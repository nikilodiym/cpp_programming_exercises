#include <iostream>
#include <string>

using namespace std;

struct Point {
	double x, y;
};

double distance(const Point& p1, const Point& p2) {
	return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

int main() {
	Point p1 = { 0.0, 0.0 };
	Point p2 = { 3.0, 4.0 };

	cout << "Distance between points: " << distance(p1, p2) << endl;

	system("pause");
	return 0;
}