#include<iostream>
#include<string>

bool IScold(int temperature);
bool ISwarm(int temperature);
bool IShot(int temperature);

int main(){

    int temperature;
    std::cout<<"Enter the temperature(in Celcius): ";
    std::cin>>temperature;

    if(IScold(temperature)){
        std::cout<<"It's cold out there!";
    }
    else if(ISwarm(temperature)){
        std::cout<<"It's warm out there!";
    }
    else if(IShot(temperature)){
        std::cout<<"Goddang! It's hot out there!";
    }
    else{
        std::cout<<"Invalid input";
    }

}

bool IScold(int temperature){

    if(temperature<20){
        return true;
    }else{
        return false;
    }

}
bool ISwarm(int temperature){

    if(temperature>=20 && temperature<30){
        return true;
    }else{
        return false;
    }

}
bool IShot(int temperature){
    if(temperature>=30){
        return true;
    }else{
        return false;
    }
}