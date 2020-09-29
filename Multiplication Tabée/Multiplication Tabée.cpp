#include <iostream>

using namespace std;

int main()
{
    int tableSize = GetNumber();
}

int GetNumber() {
    int number;
    
    cout << "Please enter a number: ";
    cin >> number;

    return number;
}