#include<iostream>

double getArea(double width,double length);
double getPerimeter(double width,double length);

int main(){

    double width,length;

    std::cout<<"Enter the width of the rectangle: ";
    std::cin>>width;
    
    std::cout<<"Enter the length of the rectangle: ";
    std::cin>>length;

    std::cout<<"Area of the rectangle is :"<<getArea(width,length);
    std::cout<<"\nPerimeter of the rectangle is :"<<getPerimeter(width,length);

    return 0;
}

double getArea(double width,double length){
    return width*length;
}
double getPerimeter(double width,double length){
    return 2*(length+width);
}