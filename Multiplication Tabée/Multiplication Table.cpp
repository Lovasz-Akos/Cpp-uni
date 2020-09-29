#include <iostream>
int GetNumber();
void MultiplicationTable(int tableSize);

using namespace std;

int main()
{
    int tableSize = GetNumber();
    cout << tableSize;
    return 0;
}

int GetNumber() {
    int number;
    do {
        cout << "Please enter a number: ";
        cin >> number;
    } while (!(cin >> number));

    return number;
}