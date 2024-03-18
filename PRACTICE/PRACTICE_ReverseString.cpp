#include<iostream>
#include<string>

std::string Str_reverse(std::string str);

int main(){

    std::string inputt=" ";

    std::cout<<"Enter a string: ";
    std::getline(std::cin>>std::ws,inputt);

    std::cout<<"Reverse of the siring "<<inputt<<" is "<<Str_reverse(inputt);

    return 0;
}

//reversing the string characterwise - date(17/03/24)-Signed Fardin Abu Ubaid😌
std::string Str_reverse(std::string str){

    std::string value = str;
    std::string str_value[value.length()];
    std::string Reverse_str = "";

    for(int i=0;i<value.length();i++){
        str_value[i]=value.at(i);
    }

    for(int i=value.length();i>=0;i--){
        Reverse_str.append(str_value[i]);
    }

    Reverse_str=Reverse_str.erase(0,value.length());

    return Reverse_str;

}