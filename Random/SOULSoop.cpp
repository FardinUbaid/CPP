#include<iostream>
using std::string;

class HUMAN{
        //Attributes
    private:
        string Name;
        string Type;
        int Age;
        float Damage;
    
    public:
        //setter and getter methods
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setType(string type){
            Type = type;
        }
        string getType(){
            return Type;
        }
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }
        void setDamage(float damage){
            Damage = damage;
        }
        float getDamage(){
            return Damage;
        }
        //Method
        void printInfo(){
            std::cout<<"Name\t:"<<Name<<'\n';
            std::cout<<"Type\t:"<<Type<<'\n';
            std::cout<<"Age\t:"<<Age<<'\n';
            std::cout<<"Damage\t:"<<Damage<<'\n';
        }
        //Constructor
        HUMAN(string name,string type,int age,float damage){
            Name = name;
            Type = type;
            Age = age;
            Damage = damage;
        }
};

//MARK: Main
int main(){

    HUMAN H1 = HUMAN("Calix","Human",400,230.0f);
    H1.printInfo();

    H1.setDamage(300.01);
    std::cout<<H1.getName()<<" has now damage of\t:"<<H1.getDamage()<<'\n';

    return 0;
}