#include<iostream>

int main(){

    float total=0;
    int range;

    std::cout<<"Number of Inputs: ";
    std::cin>>range;

    float nums[range];

    for(int i=0;i<range;i++){
        std::cout<<"Intput #"<<i+1<<" : ";
        std::cin>>nums[i];
    }

    for(int i=0;i<range;i++){
        total = total + nums[i];
    }

    std::cout<<"Total = "<<total<<"\nAverage of total ="<<total/range<<"\nParcentage= "<<(total/range)*0.01<<"%";

    return 0;
}