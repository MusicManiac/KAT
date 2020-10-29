// 10235 - Simply Emirp.cpp
//
#include <iostream>
#include <cmath>

unsigned long int reverseNumber(unsigned long int num);
bool isPrime(unsigned long int num);

int main() {
    unsigned long int num = 0;
    while (scanf("%ld", &num) == 1) {
        bool numIsPrime = isPrime(num);
        if (!numIsPrime) {
            std::cout << num << " is not prime.\n";
        }
        else {
            unsigned long int reversedNum = reverseNumber(num);
            bool numIsEmirp = isPrime(reversedNum);
            if (numIsEmirp && num != reversedNum) {
                std::cout << num << " is emirp.\n";
            }
            else {
                std::cout << num << " is prime.\n";
            }
        }
    }
}

unsigned long int reverseNumber(unsigned long int num) {
    unsigned long int remainder = 0, reversedNumber = 0;
    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    return reversedNumber;
}

bool isPrime(unsigned long int num) {
    unsigned long int lastCheckpoint = sqrt(num);
    for (int i = 2; i <= lastCheckpoint; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
