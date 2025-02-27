#include <iostream>

int main() {

    int matrixOne[3][3];
    int matrixTwo[3][3];
    int result[3][3];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            std::cout << "Input element for matrixOne[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> matrixOne[i][j];
        }
    }
    std::cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            std::cout << "Input element for matrixOne[" << i+1 << "][" << j+1 << "]: ";
            std::cin >> matrixTwo[i][j];
        }
    }

    std::cout << "\n Matrix One Is :  \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<matrixOne[i][j]<<'\t';
        }
        std::cout << "\n";
    }
    std::cout << "\n Matrix Two Is :  \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<matrixTwo[i][j]<<'\t';
        }
        std::cout << "\n";
    }
    std::cout << "\n Matrix Multiplication Answer Is :  \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j]=matrixOne[i][j]*matrixTwo[j][i];
            std::cout <<result[i][j]<<'\t';
        }
        std::cout << "\n";
    }

    return 0;
}
