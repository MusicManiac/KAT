// 1180 - Perfect Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

bool isPrime(int num);

int main() {
	int cases = 0;
	std::cin >> cases;
	unsigned int limit = 131072; // 2^17
	while (cases--) {
		unsigned long long int num = 0, largestPower = 0, p1 = 0;
		int p = 0;
		char trash;
		std::cin >> p >> trash;
		largestPower = pow(2, p) - 1;
		if (largestPower > limit) {
			//std::cout << "p2 > limit break\n";
			cases++;
			while (cases--)
				std::cout << "No\n";
			break;
		}
		if (isPrime(p) && isPrime(largestPower))
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	//std::cout << "End\n";
}

bool isPrime(int num) {
	if (num == 0 || num == 1) {
		return false;
	}
	else {
		for (int i = 2; i <= num / 2; ++i) {
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}
