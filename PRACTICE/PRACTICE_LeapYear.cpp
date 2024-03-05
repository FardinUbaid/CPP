#include<iostream>
#include<string>

bool getLeapYear(int $year);

int main(){

    int $Year;

    std::cout<<"Enter a Year: ";
    std::cin>>$Year;

    if(getLeapYear($Year)){
        std::cout<<$Year<<" is a Leap Year";
    }
    else{
        std::cout<<$Year<<" is not a Leap Year";
    }

    return 0;
}

bool getLeapYear(int $year){
    if(($year % 4 == 0 && $year % 100 != 0) || $year % 400 == 0){
        return true;
    }
    else{
        return false;
    }
}