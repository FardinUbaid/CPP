#include<iostream>
#include<string>

std::string Str_reverse(std::string str);

int main(){

    std::string inputt=" ";

    std::cout<<"Enter a string: ";
    std::getline(std::cin>>std::ws,inputt);

    std::string reverse_str = Str_reverse(inputt);

    if(inputt == reverse_str){
        std::cout<<"(characterwise) "<<inputt<<" is a Palindrome";
    }else{
        std::cout<<"(characterwise) "<<inputt<<" & "<<reverse_str<<" is not a Palindrome";
    }


    return 0;
}

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