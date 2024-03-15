#include<iostream>

int main(){

    int number1,number2,number3;

    std::cout<<"Enter the first number: ";
    std::cin>>number1;
    std::cout<<"Enter the second number: ";
    std::cin>>number2;
    std::cout<<"Enter the third number: ";
    std::cin>>number3;

    if (number3>number2 && number3>number1){
        if(number2>number1){
            std::cout<<"The ascending order is :"<<number1<<" "<<number2<<" "<<number3;
        }else{
            std::cout<<"The ascending order is :"<<number2<<" "<<number1<<" "<<number3;
        }
    }
    else if (number2>number3 && number2>number1){
        if(number3>number1){
            std::cout<<"The ascending order is :"<<number1<<" "<<number3<<" "<<number2;
        }else{
            std::cout<<"The ascending order is :"<<number3<<" "<<number1<<" "<<number2;
        }
    }
    else if (number1>number2 && number1>number3){
        if(number3>number2){
            std::cout<<"The ascending order is :"<<number2<<" "<<number3<<" "<<number1;
        }else{
            std::cout<<"The ascending order is :"<<number3<<" "<<number2<<" "<<number1;
        }
    }

}