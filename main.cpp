#include <iostream>
#include <numeric>
#include <string>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;

    Fraction(int n, int d) : numerator(n), denominator(d) {
        simplify();
    }

    void simplify() {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    Fraction operator+(const Fraction& other) const {
        int n = numerator * other.denominator + other.numerator * denominator;
        int d = denominator * other.denominator;
        return Fraction(n, d);
    }

    Fraction operator-(const Fraction& other) const {
        int n = numerator * other.denominator - other.numerator * denominator;
        int d = denominator * other.denominator;
        return Fraction(n, d);
    }

    Fraction operator*(const Fraction& other) const {
        int n = numerator * other.numerator;
        int d = denominator * other.denominator;
        return Fraction(n, d);
    }

    Fraction operator/(const Fraction& other) const {
        int n = numerator * other.denominator;
        int d = denominator * other.numerator;
        return Fraction(n, d);
    }

    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction sum = f1 + f2;
    sum.print();

    Fraction difference = f1 - f2;
    difference.print();

    Fraction product = f1 * f2;
    product.print();

    Fraction quotient = f1 / f2;
    quotient.print();

	system("pause");
	return 0;
}