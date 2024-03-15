#include <iostream>

int main() {
    float Number[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the #" << i + 1 << " number: ";
        std::cin >> Number[i];
    }

    // Sorting(Bubble)
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (Number[j] > Number[j + 1]) {
                float temp = Number[j];
                Number[j] = Number[j + 1];
                Number[j + 1] = temp;
            }
        }
    }
    
    std::cout << "The ascending order of the numbers is: ";
    for (int i = 0; i < 3; i++) {
        std::cout << Number[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
