#include<iostream>
#include<string>

int main(){

    int Range;
    int FizzTot=0;
    int BazzTot=0;
    int FizzBazzTot=0;

    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrBYellow = "\033[38;2;255;255;0m";
    std::string clrBBlue = "\033[38;2;0;0;255m";
    std::string clrEnd = "\033[0m";

    std::cout<<"Enter the range: ";
    std::cin>>Range;

    for(int i=1;i<Range+1;i++){

        if(i%3==0 && i%5==0){
            std::cout<<clrBRed<<"Fizz Bazz !"<<clrEnd<<'\n';
            FizzBazzTot++;
        }
        else if(i%3==0){
            std::cout<<clrBGreen<<"Fizz !"<<clrEnd<<'\n';
            FizzTot++;
        }
        else if(i%5==0){
            std::cout<<clrBYellow<<"Bazz !"<<clrEnd<<'\n';
            BazzTot++;
        }
        else{
            std::cout<<clrBBlue<<i<<clrEnd<<'\n';
        }
    }
    std::cout<<"*****************************************\n";
    std::cout<<clrBRed<<"Total Fizz \t: "<<FizzTot<<clrEnd<<'\n';
    std::cout<<clrBGreen<<"Total Bazz \t: "<<BazzTot<<clrEnd<<'\n';
    std::cout<<clrBYellow<<"Total FizzBazz \t: "<<FizzBazzTot<<clrEnd<<'\n';
    std::cout<<"*****************************************\n";


    return 0;
}