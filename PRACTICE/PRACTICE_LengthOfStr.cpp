#include<iostream>

int main(){

    std::string str;
    std::cout<<"Enter a string: ";
    std::cin>>str;

    int lenght=0;

    for(int i=0;str[i]!='\0';i++){
        lenght++;
    }
    std::cout<<"Length of the string '"<<str<<"' is:"<<lenght;
    
    /*
    
    Behold the holy grail 🤣

    its a basic knowlage -  what happens inside a string
    whenever we declare a string a null character is assigned by the compiler during
    compilation to understand the end of an array. ' \0 ' is called null character or
    null terminator which holds the ascii value of 0 . 

    eg. it looks like this
    std::string arr[]={'f','a','r','d','i','n','\0'};

    so if we find the null character that means we hit the end of the array.

    */


    return 0;
}