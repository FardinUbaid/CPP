#include<iostream>

int main(){

    int length = 108;

    std::string clrEnd = "\033[0m";
    std::string clrPrefix = "\033[";
    char clrPostfix = 'm';

    for(int suffix = 0;suffix<length;suffix++){

        std::cout<<"Value = "<<suffix<<":"<<clrPrefix<<suffix<<clrPostfix<<"FARDIN"<<clrEnd<<'\n';

    }
    return 0;
}