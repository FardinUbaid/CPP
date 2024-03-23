#include<iostream>

int main() {
    int limit;
    std::cout << "Enter the limit of the series:";
    std::cin >> limit;

    int defVal = 0;
    int defPlus1 = 1;

    std::cout << defVal << " + " << defPlus1;

    for (int i = 3; i <= limit; i++) {
        int temp = defPlus1;
        defPlus1 += defVal;
        defVal = temp;

        std::cout << " + " << defPlus1;
    }

    return 0;
}
