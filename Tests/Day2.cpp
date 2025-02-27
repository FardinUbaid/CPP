#include<iostream>
using namespace std;

/*
    1. Assignment Operation
    2. Constant Vars
    3. increment/decrement
    4. Input 
    5. Comparison operator
    6. if else
*/

int main(){

    //MARK: Assigment Operation
    //int var1; // declaration
    //int var1 = 10; //declaration + initialization/assignment
    //int var1;
    //float var2 =20.04;
    //var1 = var2;
    //cout<<var1<<endl;

    //MARK: CONSTANT
    //const float PI = 3.1416;
    //PI = 3.0002;

    //MARK: Increment Decrement

    //var1 = var1 + 2; // incrment of var1 by 10 => var1 = 10 + 10; Neg: var1 = var1 - 5;
    //var1 += 5; // Fullform: var1 = var1 + 10;                     Neg : var1 -= 5;
    //var1++;    // Fullform :var1 = var1 + 1;                      Neg: var1--;

    //var1 = var1 * 2;   var1 = var1 / 2;
    //var1 *= 2;         var1 /= 2;

    //MARK: User Input
    /*
    int var1;
    cout<<"Insert a int value: " ;
    cin>>var1;
    cout<<var1;
    */

    //MARK: Comparison Operator
    /*
        > Greater than
        < Less than
        >= Greater Equal
        <= Less Equal
        == Equal both side
        != Not Equal

        ! Not Operator
        && And Operator
        || Or Operator

    */
    
    //MARK: IF ELse
    /*
    Syntax: 
    if(Condition){

      Will be Executed When condition is true; 

    }else{

      Will be Executed When condition is false;

    }
    */
   /*
   int Num1 = 0;
   int Num2 = 0;

   if(Num1 < Num2 && Num1 == Num2){

        cout<<"Number 1 is greater than number 2";

   }else if(Num1 == Num2){

    cout<<"Number 1 is equal to number 2";

   }else if(Num1 == 0){

        cout<<"Number 1 is equal to 0";

   }
   else{

        cout<<"Number 1 is less than number 2";

   }
   */

    string c = "Kousik" ;

    if(c == "Kousik"){
        cout<<"somthing";
    }else{
        cout<<"nothing";
    }

    return 0;
}