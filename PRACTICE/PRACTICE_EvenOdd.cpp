#include<iostream>
#include<string>

std::string get_Decetion(int $num);

int main(){

    int $Number;

    std::cout << "Enter a number: ";
    std::cin >> $Number;

    std::cout << $Number << get_Decetion($Number);

}

std::string get_Decetion(int $num){

    if($num % 2 == 0){
        return " is an even number";
    }
    else{
        return " is an odd number";
    }

}