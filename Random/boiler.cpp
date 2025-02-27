#include<iostream>

int main(){
    std::string arrALPH[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", 
                           "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    std::string arralph[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", 
                           "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    int lim;
    std::cout<<"Limit:";
    std::cin>>lim;

    for(int i = 0; i<=lim;i++){
        std::cout<<"case '"<<arralph[i]<<"':\n\tcase '"<<arrALPH[i]<<"':\n\t\tstd::cout<<\"\";\nbreak;\n\n";
    }
    
}