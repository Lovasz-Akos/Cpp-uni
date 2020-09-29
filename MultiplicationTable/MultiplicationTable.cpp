#include <iostream>
#include <iomanip>

int GetNumber();
void MultiplicationTable(int tableSize);
int calculateWidth(int number);

using namespace std;

int main()
{
    int tableSize = GetNumber();
   // cout << setw(4) << " ";
    MultiplicationTable(tableSize);
    return 0;
}

void MultiplicationTable(int tableSize) {
    int maxNumber = tableSize * tableSize;
    int width = calculateWidth(maxNumber);
    width++;

    for (int i = 1; i <= tableSize; i++)
    {
        cout << setw(width) << i;
        for (int j = 1; j <= tableSize; j++)
        {
            cout << setw(width) << i * j;
        }
        cout << endl;
    }
}

int GetNumber() {
    int number;
    do {
        cout << "Please enter a number: ";
    } while (!(cin >> number));

    return number;
}

int calculateWidth(int number) {
    int counter = 0;
    
    while (number) {
        number = number / 10;
        counter++;
    }

    return counter;
}