#include <iostream>
#include <string>
#include <cctype> // for std::isdigit

bool ASingleChar(std::string input);
bool NotADigit(std::string input);

int main() {

    std::string input;

    std::cout << "Enter the alphabet you want to check: ";
    std::getline(std::cin >> std::ws, input);

    while (!ASingleChar(input) || !NotADigit(input)) {
        std::cout << "Invalid Input ! Try again : ";
        std::getline(std::cin >> std::ws, input);
    }

    if (input == "a" || input == "e" || input == "i" || input == "o" || input == "u" ||
        input == "A" || input == "E" || input == "I" || input == "O" || input == "U") {
        std::cout << input << " is a vowel";
    } else {
        std::cout << input << " is a consonant.";
    }
    return 0;
}

bool ASingleChar(std::string input) {
    return input.length() == 1;
}

bool NotADigit(std::string input) {
    return !std::isdigit(input[0]);
}
