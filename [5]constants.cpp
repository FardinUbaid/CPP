#include<iostream>

int main(){

    /*
    what is constant ?
    -> something that is unchangeable/unupdatable/(immutable-preferreed word)
    make the variable go Read only state
    */

   // syntax -> const keyword + datatype + identifier = value;
   // const int myNum = 1;

   const float PI = 3.1416;
   //PI = 3.1333; cannot update beacuse PI is in Read only state.
   int R = 10 ;
   float circleArea = 2 * PI * R;

   std::cout << "The area of the circle = "<< circleArea;




}