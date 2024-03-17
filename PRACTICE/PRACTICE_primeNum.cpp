#include<iostream>
#include<cmath> 

bool Prime(int value);

int main() {

    int inputt = 0;

    std::cout << "Enter the number: ";
    std::cin >> inputt;

    if (Prime(inputt)) {
        std::cout << inputt << " is a Prime number";
    }
    else {
        std::cout << inputt <<" is not a prime number";
    }

    return 0;
}

bool Prime(int value) {

    if (value <= 1) {
        return false;
    }

    int sqrtValue = sqrt(value); 

   
    for (int i = 2; i <= sqrtValue; i++) {
        if (value % i == 0) {
            return false; 
        }
    }

    return true; 
}
