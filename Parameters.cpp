
#include <iostream>
#include <math.h>
using namespace std;


float squareArea(float side) {
    return side * side;
}


float squarePerimeter(float side) {
    return 4 * side;
}


float rectangleArea(float length, float width) {
    return length * width;
}


float rectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}


float circleArea(float radius) {
    return 3.1416 * pow(radius, 2);
}


float circlePerimeter(float radius) {
    return 2 * 3.1416 * radius;
}

int main() {
    float side, length, width, radius;

    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "The area of the square is: " << squareArea(side) << endl;
    cout << "The perimeter of the square is: " << squarePerimeter(side) <<endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "The area of the rectangle is: " << rectangleArea(length, width) << endl;
    cout << "The perimeter of the rectangle is: " << rectanglePerimeter(length, width) << endl;

   cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << circleArea(radius) << endl;
    cout << "The Perimeter of the circle is: " << circlePerimeter(radius) << endl;

    return 0;
}
