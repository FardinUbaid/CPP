#include<iostream>

int main() {
    int arrSiz;
    std::cout << "Enter the number of elements: ";
    std::cin >> arrSiz;
    int arr[arrSiz];

    for (int i = 0; i < arrSiz; i++) {
        std::cout << "Enter the #" << i + 1 << " element: ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < arrSiz; i++) {
        for (int j = arrSiz - 1; j > i; j--){
            if (arr[i] == arr[j]) {
                for (int k = j; k < arrSiz - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                arrSiz--;
            }
        }
    }

    std::cout << "Updated array after removing duplicates: ";
    for (int a = 0; a < arrSiz; a++) {
        std::cout << " " << arr[a];
    }

    return 0;
}
