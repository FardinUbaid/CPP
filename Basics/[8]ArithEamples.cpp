#include<iostream>
#include<cmath>

int main(){

    //free fall -> vf=v+gt

    /*
    float velocity = 20;
    const float gravity = 9.8;
    int time = 10;

    float freefallVelocity = velocity + gravity * time;

    std::cout<<"The velocity of the freely falline object will be : "<<freefallVelocity;
    */

   //distance between two points

   int x1 = 0;
   int x2 = 10;
   int y1 = 7;
   int y2 = 14 ;
    float distance = (x2*x2+2*x2*x1+x1*x1)+(y2*y2+2*y2*y1+y1*y1);
    distance = sqrt(distance);
    std::cout<<"The distance will be :"<< distance;
    // syntax of sqrt ->  sqrt(value or varibale);

    

}