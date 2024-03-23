#include<iostream>

int main(){

    /*
    syntax->

    if(condition)
    {
        if true this will execute
    }else{
        if flase this will execute
    }

    */

   // coparison operator
   /*
        >      greater than
        <      less than
        >=     greater than equal
        <=     less than equal
        ==     equivalent
        !=     not equivalent
   
   */
    /*
    multiple condition operators

    &&   And       (true and true)-(if scope)
    ||   Or      (true or false)-(if scope)
    !    Not    

    */

   int value1=10;
   int value2=20;

   bool isStudent= true;
   bool isTeacher;

   if(isStudent){

    std::cout<<"You are a student";

   }else{

    std::cout<<"You're not a student";

   }

    return 0;
}