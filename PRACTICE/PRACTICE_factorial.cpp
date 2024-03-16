#include<iostream>

int main(){

    int inputt=1;
    int factorValue=1;

    std::cout<<"Enter the number:";
    std::cin>>inputt;

    for(int i=1;i<=inputt;i++){

        factorValue=factorValue*i;
        
    }
    std::cout<<"The factorial of "<<inputt<<" is: "<<factorValue;

    return 0;
}