#include<iostream>

int main(){

    int arrSize;
    std::cout<<"Enter the number of elements of the array: ";
    std::cin>>arrSize;
    
    int arr[arrSize];
    
    for(int i=0;i<arrSize;i++){
        std::cout<<"Enter the #"<<i+1<<" element : ";
        std::cin>>arr[i]; 
    }

    int sum= 0;

    for(int i=0;i<arrSize;i++){

        sum = sum + arr[i];

    }

    std::cout<<"The sum of the arr elements is: "<<sum;

    return 0;
}