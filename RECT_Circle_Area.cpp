#include <iostream>
#include <math.h>
using namespace std;

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateCircleArea(double radius) {
    const double PI = 3.1416;
    return PI * pow(radius, 2);
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double length, width, radius, base, height;

    cout << "Choose a shape:\n1. Rectangle\n2. Circle\n3. Triangle\n";
   cin >> choice;

    switch (choice) {
        case 1:
           cout << "Enter the length and width of the rectangle: ";
           cin >> length >> width;
           cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << "\n";
            break;
        case 2:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
          cout << "The area of the circle is: " << calculateCircleArea(radius) << "\n";
            break;
        case 3:
            cout << "Enter the base and height of the triangle: ";
           cin >> base >> height;
            cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << "\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }

    return 0;
}
