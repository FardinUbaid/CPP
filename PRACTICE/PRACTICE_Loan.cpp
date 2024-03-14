#include<iostream>
#include<string>

bool ageCheck(int age);
void incomeCheck(int income);

int main(){

    int age;
    int income;

    std::cout<<"Enter your age: ";
    std::cin>>age;

    do{
        std::cout<<"Invalid Age ! Try agian: ";
        std::cin>>age;

    }while(!ageCheck(age));

    if(ageCheck(age)){
            
            std::cout<<"Enter your income :";
            std::cin>>income;

            incomeCheck(income);

        }

        return 0;

}
bool ageCheck(int age){

    if(age<=0 || age<29){
        return false;
    }else{
        return true;
    }

}
void incomeCheck(int income){

    if(income>= 30000){
        std::cout<<"You are eligible for loan.";
    }else{
        std::cout<<"You're not eligible for loan.";
    }

}