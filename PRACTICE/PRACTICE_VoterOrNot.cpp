#include<iostream>
#include<string>

void get_Decetion(int age);

int main(){
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    get_Decetion(age);

    return 0;
}

void get_Decetion(int age){

    if(age >= 18){
       std::cout << "You can vote now." << std::endl;
    }
    else if(age <= 0){
        std::cout << "Invalid age. Try again!" << std::endl;
        main();
    }
    else{
        std::cout << "You cannot vote yet." << std::endl;
    }
}
