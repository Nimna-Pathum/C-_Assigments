#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
    void setData(double s1 , double s2 , double s3){
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    double perimeter() {
        return side1 + side2 + side3;
    }

    double area() {
        double s = perimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void print_info() {
        cout << "Area of the triangle: " << area() << " square units" << endl;
        cout << "Perimeter of the triangle: " << perimeter() << " units" << endl;
    }
};

int main() {
    Triangle triangle;
    triangle.setData(3 , 4 , 5);

    triangle.print_info();

    return 0;
}
