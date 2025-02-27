#include<iostream>
#include<math.h> //math library
using namespace std;

/*
    1. Nested If else
    2. Ternary Operator
    3. Switch Case
    4. Maths methods

*/

int main(){

    /*
        if(condition){
        
            if(condition){
            
            }else{
            
            }

        }else{

                if(condition){
                
                }
        }
    
    */
   //MARK: Nested IF else
   /*
   string name = "@kousik";
   string pass = "abc123" ;

    string NameInput;
    cout<<"Please enter your username: ";
    cin>>NameInput;

    if(NameInput == name){

        string password;
        cout<<"Please enter your Password: ";
        cin>>password;

            if(password == pass){

                cout<<"Password Matched ! \n Welcome "<<name<<" To the home page!";

            }else{
                cout<<"Sorry ! Wrong Password!";
            }

    }else{
        cout<<"The Username did not match!";
    }
    */
   //MARK: Ternary Operator

   //Syntax:  condition ? code if true : code if false

   /* 
   bool hungry = true;

   hungry ? cout<<"Eat something" : cout<<"You're full" ;
    */
   //MARK: Switch Case
   //Its mainly a matching type if else
   /*
    syntax:

    switch(variable/value){
        case condition/value :
                code to be executed if the condition or value is matched with this case
            break;
        ........ you can take as much cases as you want.

        deafault:
            //code to be executed if not case is matched.
            break;
    }
   
   */
    /*
    char input;
    cout<<"Enter the char to be checked:";
    cin>>input;

    switch (input)
    {
    case 'a':

        cout<<input<<" is a vowel";

        break;

    case 'b':
        cout<<input<<" is a vowel";
        break;

    case 'c':
        cout<<input<<" is a vowel";
        break;

    case 'd':
        cout<<input<<" is a vowel";
        break;

    case 'e':
        cout<<input<<" is a vowel";
        break;
    
    default:
        cout<<input<<" is a consonant";
        break;

    }*/

   //MARK: Math's methods

    int num1 = 20;
    int num2 = 200;

    cout<<"Max: "<<max(num1,num2)<<'\n';   // max(value/variable,value/variable)  
    cout<<"Min: "<<min(num1,num2)<<'\n';   // min(value/variable,value/variable)

    cout<<"2 to the power 3: "<<pow(2,3)<<'\n'; // pow(base number,power)
    cout<<"squre root of 200: "<<sqrt(200)<<'\n'; // sqrt(value/variable)
    cout<<"Absolute value of -233: "<<abs(-233)<<'\n'; //abs(value/variable)
    cout<<"Rounded value of 10.13: "<<round(10.6)<<'\n'; // round(value/variable)
    cout<<"Ceiling value of 10.13: "<<ceil(10.13)<<'\n'; // ceil(value/variable)
    cout<<"Floored value of 10.55: "<<floor(10.55)<<'\n'; // floor(value/variable)
    

    return 0;
}