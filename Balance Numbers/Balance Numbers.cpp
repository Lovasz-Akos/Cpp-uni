#include <iostream>

using namespace std;

unsigned long numberIn();
void balanceOut(unsigned long n);


//http://aries.ektf.hu/~hz/wiki7/mprog1gy/gyak_12 <- innen az 5ös feladatot csinálja a program

int main()
{
	auto number = numberIn(); //az auto az kitalálja hogy milyen tipusú legyen
	balanceOut(number);
	return 0;
}

unsigned long numberIn() {
	unsigned long number;

	do
	{
		cout << "Please enter a number: ";

	} while (!(cin >> number) || 0 == number);

	return number;
}

void balanceOut(unsigned long n) {
	//1, 2, 3, 4, 5, 6, 7, 8
	for (auto i = 2; i <= n; i++)
	{
		unsigned int leftSum = 0;

		for (auto j = 0; j <= i; j++)
		{
			leftSum += j;
		}

		unsigned int rightSum = i;
		int j = i+1;
		while (rightSum < leftSum) {
			rightSum += j;
			j++;
		}

		if (rightSum == leftSum)
		{
			cout << i << endl;
		}
	}
}