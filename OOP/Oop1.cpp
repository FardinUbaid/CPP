#include<iostream>

//creating aa new class {User defined datatype}
class Employee{             //syntax: class className { };
    public:                 // access modifier for the attributes 
        std::string Name;   // members of the class
        std::string Company;  
        int age;

    //member function of the class
    void showInfo(){

        std::cout<<"Name of the employee is: "<<Name<<'\n';
        std::cout<<"Company's Name: "<<Company<<'\n';
        std::cout<<"Age of the employee is: "<<age<<'\n';
        
    }
};


int main(){

    Employee emp;           // creating an object of Employee class
    emp.Name = "Fardin";    // assigning value to the Name attribute of the object
    emp.Company = "Google"; // assigning value to the Company attribute of the object
    emp.age = 24;           // assigning value to the age attribute of the object
    emp.showInfo();         //calling member function of the class Employee


    return 0;
}