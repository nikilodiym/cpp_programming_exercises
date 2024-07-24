#include <iostream>
#include <string>

using namespace std;

struct Rectangle {
    int x, y;
    int width, height;

    void print() const {
        cout << "Rectangle(" << x << ", " << y << ", " << width << ", " << height << ")" << endl;
    }

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void resize(int newWidth, int newHeight) {
        width = newWidth;
        height = newHeight;
    }
};

int main() {
    Rectangle rect = { 0, 0, 10, 5 };
    rect.print();

    rect.move(5, 10);
    rect.print();

    rect.resize(20, 10);
    rect.print();

	system("pause");
	return 0;
}