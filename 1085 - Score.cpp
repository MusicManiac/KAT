/* 1585 - Score
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4460
*/

#include <iostream>
#include <string>

int calculateScore(std::string str);

int main() {
    int amountOfCases = 0;
    std::cin >> amountOfCases;
    for (int i = 1; i <= amountOfCases; i++) {
        std::string testString = "";
        std::cin >> testString;
        std::cout << calculateScore(testString) << "\n";
    }
    return 0;
}

int calculateScore(std::string str) {
    int score = 0, answerValue = 0;;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'O') {
            answerValue++;
            score += answerValue;
        }
        else {
            answerValue = 0;
        }
    }
    return score;
}
