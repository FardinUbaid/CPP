#include<iostream>
#include<string>
#include<cctype>//holds the toupper and tolower methods

int main(){


    std::string str;
    std::cout<<"Enter a string: ";
    std::getline(std::cin>>std::ws,str);

    std::cout<<"Uppercase of the string '"<<str<<"' is: ";
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = std::toupper(str[i]);
    }
    std::cout<<str;
    


    return 0;
}