#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, base, height, side;

    cout << "===== Geometry Calculator =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Circumference of Circle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Area of Square" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of Circle = " << 3.14 * radius * radius << endl;
            break;

        case 2:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Circumference of Circle = " << 2 * 3.14 * radius << endl;
            break;

        case 3:
            cout << "Enter base and height of triangle: ";
            cin >> base >> height;
            cout << "Area of Triangle = " << 0.5 * base * height << endl;
            break;

        case 4:
            cout << "Enter side of square: ";
            cin >> side;
            cout << "Area of Square = " << side * side << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
