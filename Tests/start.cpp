#include<iostream>
using namespace std;

int main(){

    //Basic Printing
    //Syntax:  cout << text / Veriable | for text=>   cout<<"Your Text Goes here";
    // endl => endline . Creates a new line in the console. Alternative way is to use \n sequence


    //variable => datatype variableName = value;
    // declaration => datatype variableName;
    // initiation => datatype VariableName = Value;
    
    int var1 = 20;
    float f = 1.12345678; // upto 8 decimal place after (.)
    double d = 1.123456789123456; // upto 15 decimal place after (.)
    char c = 'a';  // enclosed with single coats ('')
    string s = "af"; // enclosed with double coats ("")
    bool b = true; // true or false , 1 or 0 , 1 means true, 0 means false

    /*
    rules for declaring varible names

    a variable name can not start with a digit
    variable name can not be a data type
    variable name can only support ($) and (_)
    
    */
   
   
    int num1 = 2;
    int num2 = 7;

    int result = num1 + num2 + 10 ;

    cout<<"The result is: "<< result <<" sometig\n";

    // modulas operator (%) . Vagsesh


    cout<<"The remainder is :"<<num2 % num1;



    return 0;
}