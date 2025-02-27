#include<iostream>
#include<cmath>

int main(){

    int num1 = 100;
    int num2 = 5;
    int num3 = 36;

    int num4 = -1030;
    
    double num5 = 10.44;
    double num6 = 20.55;
    double num7 = 20.00;

    // power funtion ->  pow(constant,power value) - constant to the power value
    std::cout<< "2 to the power 3 is = "<< pow(2,3)<<'\n';
    std::cout<< "2 to the power 3 is = "<< pow(num1,num2)<<'\n';

    //squre root funtion -> sqrt(value or identifier) 
    std::cout<< "The squre root of 16 is = "<< sqrt(16)<<'\n';
    std::cout<< "The squre root of "<< num3 << " is = "<< sqrt(num3)<<'\n';

    //absolute -> abs(value or identifier)
    std::cout<< "The absolute of -16 is = "<< abs(-16)<<'\n';
    std::cout<< "The absolute of "<< num4 << " is = "<< abs(num4)<<'\n';

    //round funtion -> round(value or identifier)
    std::cout<< "The round of 11.66 is = "<< round(11.66)<<'\n';
    std::cout<< "The round of "<< num5 << " is = "<< round(num5)<<'\n';


    //ceiling funtion -> ceil(value or identifier) ->round up
    std::cout<< "The ceiling of 11.01 is = "<< ceil(11.01)<<'\n';
    std::cout<< "The ceiling of "<< num6 << " is = "<< ceil(num6)<<'\n';

    //floor funtion -> floor(value or identifier)
    std::cout<< "The floor of 11.99 is = "<< floor(11.99)<<'\n';
    std::cout<< "The floor of "<< num7 << " is = "<< floor(num7)<<'\n';



}