#include <iostream>
#include <string>

using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    int enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;

    void setValues(double l, double c, double ev, int ep, double wd, const string& col, const string& tt) {
        length = l;
        clearance = c;
        engineVolume = ev;
        enginePower = ep;
        wheelDiameter = wd;
        color = col;
        transmissionType = tt;
    }

    void print() const {
        cout << "Car: " << endl;
        cout << "  Length: " << length << endl;
        cout << "  Clearance: " << clearance << endl;
        cout << "  Engine Volume: " << engineVolume << endl;
        cout << "  Engine Power: " << enginePower << endl;
        cout << "  Wheel Diameter: " << wheelDiameter << endl;
        cout << "  Color: " << color << endl;
        cout << "  Transmission Type: " << transmissionType << endl;
    }
};

void searchByColor(const Car* cars, int size, const string& searchColor) {
    for (int i = 0; i < size; ++i) {
        if (cars[i].color == searchColor) {
            cars[i].print();
        }
    }
}

int main() {
    Car car1, car2;

    car1.setValues(4.5, 0.2, 2.0, 150, 18.0, "Red", "Automatic");
    car2.setValues(3.5, 0.15, 1.6, 110, 16.0, "Blue", "Manual");

    car1.print();
    car2.print();

    Car cars[2] = { car1, car2 };

    string searchColor = "Red";
    searchByColor(cars, 2, searchColor);

	system("pause");
	return 0;
}