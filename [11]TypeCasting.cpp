#include<iostream>

int main(){

    int ques = 10;
    int score = 8;
    // int / int = int . so have to type-cast the devider to get the extra floating points
    double result = ques / (double)score;
    std::cout<<"The result is :"<< result;


}