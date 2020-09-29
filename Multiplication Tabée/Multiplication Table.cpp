#include <iostream>
#include <iomanip>

int GetNumber();
void MultiplicationTable(int tableSize);

using namespace std;

int main()
{
    int tableSize = GetNumber();
    cout << tableSize;

    MultiplicationTable(tableSize);
    return 0;
}

void MultiplicationTable(int tableSize) {
    for (int i = 0; i <= tableSize; i++)
    {
        cout << setw(tableSize) << i;
    }
}

int GetNumber() {
    int number;
    do {
        cout << "Please enter a number: ";
        cin >> number;
    } while (!(cin >> number));

    return number;
}