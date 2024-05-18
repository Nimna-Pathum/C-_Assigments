#include <iostream>
using namespace std;
class Area {
private:
    double length, breadth;

public:
    void setDim(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() {
        return length * breadth;
    }
};

int main() {
    double l, b;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;

    Area rectangle;

    rectangle.setDim(l, b);

    cout << "Area of the rectangle: " << rectangle.getArea() << endl;

    return 0;
}

