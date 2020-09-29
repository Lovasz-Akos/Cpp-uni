#include <iostream>

int GetNumberA();
int GetNumberB(int a);
bool Mirror(int num);
void MirrorNumbers(int a, int b);

using namespace std;

int main() 
{
    int a, b;
    a = GetNumberA();
    b = GetNumberB(a); 

    MirrorNumbers(a, b);

    return 0;
}

int GetNumberA() {
    int number;
    do {
        cout << "Please enter a number greater than 9: ";
    } while (!(cin >> number) || !(number > 9));
    return number;
}

int GetNumberB(int a) {
    int number;
    do {
        cout << "Please enter a number greater than " << a << ": ";
    } while (!(cin >> number) || !(number > a));
    return number;
}

bool Mirror(int num)
{
    int rev = 0;
    int number = num;
    while (number > 0)
    {
        rev *= 10;
        rev += number % 10;
        number /= 10;
    }

    return rev == num;
}

void MirrorNumbers(int a, int b) {
    for (int i = a; i <= b; i++)
    {
        if (Mirror(i))
        {
            cout << i << endl;
        }
    }
}