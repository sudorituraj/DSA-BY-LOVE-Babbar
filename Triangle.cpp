#include <iostream>
#include <cmath>

using namespace std;

double area(double base, double height) {
    return 0.5 * base * height;
}

double area(double side) {
    return (sqrt(3) / 4) * side * side;
}

double area(double base, double height, char type) {
    if (type == 'e') {
        return (sqrt(3) / 4) * base * base;
    } else {
        return 0.5 * base * height;
    }
}

int main() {
    double base, height, side;
    char type;

    cout << "Enter the type of triangle (r for right-angle, e for equilateral, i for isosceles): ";
    cin >> type;

    if (type == 'r') {
        cout << "Enter base and height of the right-angle triangle: ";
        cin >> base >> height;
        cout << "Area of the right-angle triangle is: " << area(base, height) << endl;
    } else if (type == 'e') {
        cout << "Enter the side of the equilateral triangle: ";
        cin >> side;
        cout << "Area of the equilateral triangle is: " << area(side) << endl;
    } else if (type == 'i') {
        cout << "Enter base and height of the isosceles triangle: ";
        cin >> base >> height;
        cout << "Area of the isosceles triangle is: " << area(base, height, type) << endl;
    } else {
        cout << "Invalid triangle type entered!" << endl;
    }

    return 0;
}
