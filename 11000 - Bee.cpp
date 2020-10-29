// 11000 - Bee.cpp

#include <iostream>

int main() {
    int years = 0;
    while (std::cin >> years) {
        if (years == -1) {
            break;
        }
        unsigned long male[2] = { 0, 0 }, female[2] = { 1, 0 };
        unsigned long totalBees = 0;
        // female -> 1 male
        // male -> 1 male and 1 female
        for (int i = 1; i <= years; i++) {
            male[1] = male[0] + female[0];
            female[1] = male[0] + 1;
            male[0] = male[1];
            female[0] = female[1];
        }
        totalBees = male[0] + female[0];
        std::cout << male[0] << " " << totalBees << "\n";
    }
    return 0;
}
