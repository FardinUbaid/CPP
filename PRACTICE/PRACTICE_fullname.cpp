#include<iostream>
#include<string>

std::string getFullName(std::string _fName,std::string _lName);

int main(){

    std::string $firstName;
    std::string $lastName;

    std::cout<<"Enter your first name: ";
    std::getline(std::cin>>std::ws,$firstName);
    
    std::cout<<"Enter your last name: ";
    std::getline(std::cin>>std::ws,$lastName);

    std::cout<<"Your full name is "<< getFullName($firstName,$lastName)<<'\n';

    return 0;
}

std::string getFullName(std::string _fName,std::string _lName){

    const std::string fname = _fName;
    const std::string lname = _lName;

    return fname + " " + lname;

}