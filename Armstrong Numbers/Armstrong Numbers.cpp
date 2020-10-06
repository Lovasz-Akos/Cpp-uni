#include <iostream>
using namespace std;

void armstrongOut(int n);
int countDigits(int n);
unsigned long long power(int number, int power);
bool armstrongNumber(int n);

int main()
{
	armstrongOut(500);
}
bool armstrongNumber(int n) {
	int sum = 0;
	auto helper = n;

	auto count = countDigits(n);
	while (n) {
		int number = n % 10;
		sum += power(number, count);
		n /= 10;
	}

	return helper == sum;
}

unsigned long long power(int number, int power) {
	unsigned long long value = number;

	if (power == 0) {
		return 1;
	}
	for (auto i = 2; i <= power; i++) {
		value += value;
	}

	return value;
}

int countDigits(int n) {
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}

void armstrongOut(int n) {
	for (auto i = 0; i <= n; i++) {
		if (armstrongNumber) {
			cout << n << endl;
		}
	}
}