#include<iostream>
#include<string>

int getLargestNumber(int $numberOne,int $numberTwo,int $numberThree);

int main(){

    int $NumOne;
    int $NumTwo;
    int $NumThree;

    std::cout<<"Enter the first number: ";
    std::cin>>$NumOne;
    std::cout<<"Enter the Second number: ";
    std::cin>>$NumTwo;
    std::cout<<"Enter the Third number: ";
    std::cin>>$NumThree;

    std::cout<<"The biggest number among "<<$NumOne<<" , "<<$NumTwo<<" & "<<$NumThree<<" is "<<getLargestNumber($NumOne,$NumTwo,$NumThree);

    return 0;
}

int getLargestNumber(int $numberOne,int $numberTwo,int $numberThree){

    if($numberOne>$numberTwo && $numberOne>$numberThree){

        return $numberOne;

    }
    else if($numberTwo>$numberOne && $numberTwo>$numberThree){
        
        return $numberTwo;

    }
    else{

        return $numberThree;
        
    }
}