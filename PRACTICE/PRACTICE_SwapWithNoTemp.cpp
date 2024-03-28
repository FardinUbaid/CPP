#include<iostream>

void swapElem(int &numOne,int &numTwo); //important to get address not value.
int main(){

    int numOne,numTwo;

    std::cout<<"Enter the first number:";
    std::cin>>numOne;
    std::cout<<"Enter the second number:";
    std::cin>>numTwo;

    std::cout<<"Before swapping X = "<<numOne<<" & Y = "<<numTwo<<'\n';
    swapElem(numOne,numTwo);
    std::cout<<"After swapping  X = "<<numOne<<" & Y = "<<numTwo;

    return 0;
}
void swapElem(int &numOne,int &numTwo){

    numOne = numOne + numTwo;
    numTwo = numOne - numTwo;
    numOne = numOne - numTwo;

}