#include<iostream>

int main(){

    //syntax -> typedef OriginalDatatype NameToBeGiven [Old Version]

    typedef std::string s;
    typedef int num;

    s name = "fardin";
    num myNum = 10;

    //std::cout<< name;
    //std::cout<< myNum;

    //syntax using NametoBeGiven = OriginalDataType
    using vashomanNumber = float;
     
    vashomanNumber myFloat = 10.22;
    std::cout<< myFloat;
    
}