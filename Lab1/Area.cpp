#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = M_PI, radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi*(radius * radius);
    cout << "The area of the circle is " << area << "\n";
}