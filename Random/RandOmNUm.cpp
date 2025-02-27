#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomNumberRand(int min, int max) {
   
    int random_number = std::rand();
    return random_number % (max - min + 1) + min; // Range [min, max]
}

int main() {

    std::srand(std::time(0)); // Seed with current time at the beginning of the code

    int randomNumber = generateRandomNumberRand(1, 100);
    std::cout << "Random Number (Rand): " << randomNumber << std::endl;
    return 0;
}
