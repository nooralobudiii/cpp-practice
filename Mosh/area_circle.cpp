#include <iostream> 
#include <cmath>

using namespace std; 

int main() {

    const double pi = 3.142;

    double radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    double area_of_circle = pi * (pow(radius, 2));

    cout << "Area of Circle = " << area_of_circle << "\n";

    return 0;

}