#include<iostream>
#include<string>

bool isEQUILATERAL(double SideOne, double SideTwo, double SideThree);
bool isISOSCELES(double SideOne, double SideTwo, double SideThree);
bool isSCALENE(double SideOne, double SideTwo, double SideThree);

int main(){

    double SideOne;
    double SideTwo;
    double SideThree;

    std::cout << "Enter the value of side #1 :";
    std::cin >> SideOne;
    std::cout << "Enter the value of side #2 :";
    std::cin >> SideTwo;
    std::cout << "Enter the value of side #3 :";
    std::cin >> SideThree;

    if(isEQUILATERAL(SideOne, SideTwo, SideThree)){
        std::cout << "This is an EQUILATERAL Triangle !";
    }
    else if(isISOSCELES(SideOne, SideTwo, SideThree)){
        std::cout << "This is an ISOSCELES Triangle !";
    }
    else if(isSCALENE(SideOne, SideTwo, SideThree)){
        std::cout << "This is a SCALENE Triangle !";
    }
    else{
        std::cout << "Invalid inputs! Try again \n";
    }

    return 0;

}
bool isEQUILATERAL(double SideOne, double SideTwo, double SideThree){

    if(SideOne == SideTwo && SideTwo == SideThree){
        return true;
    }
    else{
        return false;
    }

}
bool isISOSCELES(double SideOne, double SideTwo, double SideThree){
    
    if((SideOne == SideTwo && SideOne != SideThree) || (SideOne == SideThree && SideOne != SideTwo) || (SideTwo == SideThree && SideTwo != SideOne)){
        return true;
    }
    else{
        return false;
    }

}
bool isSCALENE(double SideOne, double SideTwo, double SideThree){
    // not nessessary . I just wanted to add the conditions :) 
    if(SideOne != SideTwo && SideOne != SideThree && SideTwo != SideThree){
        return true;
    }
    else{
        return false;
    }

}
