#include<iostream>
#include<string>
#include<cmath>

std::string getGrade(const double _marks);
bool isValid(double _marks);

int main(){

    double $marks;

    std::cout << "Enter your obtianed marks:";
    std::cin >> $marks;

    if(isValid($marks)){
        std::cout << "Your grade is : " << getGrade($marks);
    }
    else{
        std::cout<<"Invalid Input! Try again. \n ";
    }

    return 0;

}

bool isValid(double _marks) {
    if (std::isnan(_marks)) {
        return false;
    } else {
        if (_marks >= 0 && _marks <= 100) {
            return true;
        } else {
            return false;
        }
    }
}

std::string getGrade(const double _marks){

    std::string grade = " ";

    if(_marks<=49){

        grade = "F";
        return grade;
    }
    else if(_marks>=50 || _marks < 59){
        grade = "D";
        return grade;
    }
    else if(_marks>=60 || _marks < 69){
        grade = "C";
        return grade;
    }
    else if(_marks>=70 || _marks < 79){
        grade = "B";
        return grade;
    }
    else if(_marks>=80 || _marks < 89){
        grade = "A";
        return grade;
    }
    else if(_marks>=90 || _marks <= 100){
        grade = "A+";
        return grade;
    }
    else{
        grade = "Out of bound!";
        return grade;
    }
}