// 1225 - Digit Counting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main() {
    int cases = 0;
    std::cin >> cases;
    int digits[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    while (cases--) {
        int number = 0;
        std::cin >> number;
        for (int i = number; i > 0; i--) {
            int temp = i;
            while (temp != 0) {
                digits[temp % 10]++;
                temp /= 10;
            }
        }
        std::cout << digits[0] << " " << digits[1] << " " << digits[2] << " " << digits[3] << " " << digits[4] << " " << digits[5] << " " << digits[6] << " " << digits[7] << " " << digits[8] << " " << digits[9] << "\n";
        std::fill(std::begin(digits), std::end(digits), 0);
    }
}