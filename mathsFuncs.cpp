#include<iostream>

int main(){

    //these are included in the std


    int myVal1 = 10;
    int myVal2 = 20;

    
    int result = std::max(myVal1,myVal2);
    std::cout<<"Max value is: "<< result<<'\n';
    
    int result1 = std::min(myVal1,myVal2);
    std::cout<<"Min value is: "<< result1;

}