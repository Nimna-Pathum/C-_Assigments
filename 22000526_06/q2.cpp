#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) : real(r), imag(i) {}

    Complex add(Complex other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(Complex other) {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex multiply(Complex other) {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    void display() {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main() {
    float real1, imag1, real2, imag2;

    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex num1(real1, imag1);
    Complex num2(real2, imag2);

    cout << "Sum: ";
    num1.add(num2).display();

    cout << "Difference: ";
    num1.subtract(num2).display();

    cout << "Product: ";
    num1.multiply(num2).display();

    return 0;
}
