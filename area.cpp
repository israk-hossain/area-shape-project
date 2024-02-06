#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual float calculateArea() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float calculateArea() override {
        return 3.14 * pow(radius, 2);
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float calculateArea() override {
        return length * width;
    }
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float calculateArea() override {
        return pow(side, 2);
    }
};

int main() {
    int choice;
    float area, radius, length, width;

    cout << "1- Area of Circle " << endl;
    cout << "2- Area of Rectangle " << endl;
    cout << "3- Area of Square " << endl;
    cout << "Enter your choice :: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the Circle :: ";
            cin >> radius;
            Circle circle(radius);
            area = circle.calculateArea();
            break;
        case 2:
            cout << "Enter the length of the Rectangle :: ";
            cin >> length;
            cout << "Enter the Width of the Rectangle :: ";
            cin >> width;
            Rectangle rectangle(length, width);
            area = rectangle.calculateArea();
            break;
        case 3:
            cout << "Enter the length of the side of the Square :: ";
            cin >> length;
            Square square(length);
            area = square.calculateArea();
            break;
        default:
            cout << "Invalid choice...!";
    }

    cout << "\nArea :: " << area << endl;
    return 0;
}
