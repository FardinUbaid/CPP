#include<iostream>

int main(){
    // variables

    // integer
    int myInt = 12 ;
    std::cout <<"This is a integer value : "<< myInt << '\n';

    myInt = 14 ; // new assignment to the variable myInt
    std::cout <<"This is a integer value : "<< myInt << '\n';

    // floats   ->  decimal limit is upto 8 decimmal after (.)
    float myFloat = 10.11;
    std::cout<<"This is a float value : "<< myFloat <<'\n';
    
    // character
    //char myChar = 'f';
    char F, A, R, D, I, N;
    F = 'f';
    A = 'a';
    R = 'r';
    D = 'd';
    I = 'i';
    N = 'n';
    std::cout<<"This is a char value : "<<F<<A<<R<<D<<I<<N<<'\n';


    // strings
    std::string myStr = "Fardin Abu Ubaid";
    myStr = "Prottoy Saha"; // assigment operation
    std::cout<<"My name is "<< myStr;
    
    
    // Booleans
    bool myBool = false;
    std::cout<<"Are you over 18? "<<"'\n'Answer:"<< myBool;



}