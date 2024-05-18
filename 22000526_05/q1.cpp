#include <iostream>
using namespace std;
class Shape{
protected:
    float width, height;

public:
    Shape(float w, float h) : width(w), height(h) {}

    void set_data(float a, float b) {
        width = a;
        height = b;
    }

    float area_triangle() {
        return 0.5 * width * height;
    }

    float area_rectangle() {
        return width * height;
    }
};

int main() {
    Shape shape(5.0, 4.0);
    cout << "Area of Triangle: " << shape.area_triangle() << endl;
    cout << "Area of Rectangle: " << shape.area_rectangle() << endl;

    return 0;
}
