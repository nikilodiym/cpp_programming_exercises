#include <iostream>
#include <string>

using namespace std;

struct Complex {
    double real;
    double imag;

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
            (imag * other.real - real * other.imag) / denominator);
    }

    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4.0, 5.0);
    Complex c2(2.0, 3.0);

    Complex sum = c1 + c2;
    sum.print();

    Complex difference = c1 - c2;
    difference.print();

    Complex product = c1 * c2;
    product.print();

    Complex quotient = c1 / c2;
    quotient.print();

	system("pause");
	return 0;
}