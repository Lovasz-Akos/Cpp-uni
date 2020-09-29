#include <iostream>
#include <iomanip>

int GetNumber();
void MultiplicationTable(int tableSize);

using namespace std;

int main()
{
    int tableSize = GetNumber();
    cout << setw(4) << " ";
    MultiplicationTable(tableSize);
    return 0;
}

void MultiplicationTable(int tableSize) {
    int width = 3;

    for (int i = 0; i <= tableSize; i++)
    {
        cout << setw(width) << i;
        for (int j = 0; j < tableSize; j++)
        {
            cout << setw(width) << i;
        }
        cout << endl;
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