#include<iostream>

int main(){

    int age;
    std::cout<<"Enter your age:";
    std::cin >> age;

    std::string full_name;
    std::cout<<"Enter your full name:";
    //syntax -> std::getline(method,identifier);
    //std::getline(std::cin,full_name);
    //syntax -> std::getline(std::cin >> std::ws,identifier);
    // std::ws -> eleminates the white spaces or newlines in the existing buffer
    std::getline(std::cin>>std::ws,full_name);

    std::cout<< "Your age is: "<< age <<'\n';
    std::cout<< "hey! "<< full_name;



}