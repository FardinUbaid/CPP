#include<iostream>

// syntax namespace identifier{code to be}
namespace myGirgiti{
    int myVar = 5;

}

int main(){

    int myVar = 10 ;

    std::cout<< myVar<<'\n';
    // taking the value from girgiti namespace
    std::cout<< myGirgiti::myVar;

    /*
    using namespace myGirgiti;
    std::cout<<myVar;
    */


}