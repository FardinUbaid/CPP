#include<iostream>
#include<string>

bool isAnagram(std::string str1, std::string str2);

int main() {
    std::string stringOne, stringTwo;

    std::cout << "Enter the first string:";
    std::getline(std::cin >>std::ws, stringOne);
    std::cout << "Enter the second string:";
    std::getline(std::cin >>std::ws, stringTwo);;

    if (isAnagram(stringOne, stringTwo)) {
        std::cout << stringOne << " & " << stringTwo << " are ANAGRAM of each other.";
    } else {
        std::cout << stringOne << " & " << stringTwo << " are not ANAGRAM of each other.";
    }

    return 0;
}

bool isAnagram(std::string str1, std::string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    for (int i = 0; i < str1.length(); ++i) {
        bool found = false;
        for (int j = 0; j < str2.length(); ++j) {
            if (str1[i] == str2[j]) {
                found = true;
                str2.erase(j, 1);
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    return str2.empty();
}
