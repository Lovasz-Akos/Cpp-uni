#include <iostream>
int GetNumber();

using namespace std;

int main()
{
    int tableSize = GetNumber();

    /*int whole;

    cout << "Please enter a whole number: ";

    if (cin >> whole)
        cout << "good\n";
    else {
        cout << "bad\n";
    }

    double fraction;

    cout << "Please enter a fraction: ";
    cin >> fraction;

    cout << whole << " " << fraction << endl;
    */
}

int GetNumber() {
    int number;
    do {
        cout << "Please enter a number: ";
        cin >> number;
    } while (!(cin >> number));

    return number;
}