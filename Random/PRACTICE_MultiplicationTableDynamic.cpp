#include<iostream>

int main(){

    int multiplyWith;
    int limit;

    std::cout<<"Set the Value to multiply With:";
    std::cin>>multiplyWith;
    std::cout<<"Set the LIMIT for multiplication Table:";
    std::cin>>limit;
    
    for(int i=1;i<=limit;i++){
        std::cout<< multiplyWith <<" X "<< i <<" = "<<i*multiplyWith<<'\n';
    }

    return 0;
}