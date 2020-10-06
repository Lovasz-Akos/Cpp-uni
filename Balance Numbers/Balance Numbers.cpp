#include <iostream>
#include <chrono>
using namespace std;


unsigned long numberIn();
void balanceOut(unsigned long n);
void balanceOutOptimal(unsigned long n);


//http://aries.ektf.hu/~hz/wiki7/mprog1gy/gyak_12 <- innen az 5ös feladatot csinálja a program

int main()
{
	auto number = numberIn(); //az auto az kitalálja hogy milyen tipusú legyen
	balanceOut(number);
	cout << "------------------------------" << endl;
	balanceOutOptimal(number);
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
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

	
	for (auto i = 2; i <= n; i++) {
		unsigned int leftSum = 0;

		for (auto j = 0; j <= i; j++) {
			leftSum += j;
		}

		unsigned int rightSum = i;
		int j = i + 1;
		while (rightSum < leftSum) {
			rightSum += j;
			j++;
		}

		if (rightSum == leftSum) {
			cout << i << endl;
		}
	}

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	//nemkell a chrono csak kíváncsi voltam hogy tényleg gyorsabb e
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[micro s]" << std::endl;

}


void balanceOutOptimal(unsigned long n) {
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	
	unsigned int leftSum = 1;
	unsigned int rightSum = 0;
	int j = 2;
	
	for (auto i = 2; i <= n; i++) {
		leftSum += i;

		if (i != 2) {
			rightSum -= (i - 1);
		}

		while (rightSum < leftSum) {
			rightSum += j;
			j++;
		}

		if (rightSum == leftSum) {
			cout << i << endl;
		}
	}

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[micro s]" << std::endl;

}