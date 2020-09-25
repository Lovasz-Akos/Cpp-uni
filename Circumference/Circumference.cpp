#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int radius;
    double circumference;
    double area;
    
    cout << "Please enter the radius: ";
    cin >> radius;

    if (cin) {
        circumference = 2 * radius * M_PI;
        area = radius * radius * M_PI;
        cout << "A circle with " << radius << " radius has a circumference of: " << circumference;
        cout << " and it's area is: " << area << endl;
    }
    else {
        cout << "Value error!" << endl;
    }

}