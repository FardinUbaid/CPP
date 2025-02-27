#include <iostream>
#include <windows.h> // for Sleep

int main() {

    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrBYellow = "\033[38;2;255;255;0m";
    std::string clrBBlue = "\033[38;2;0;0;255m";
    std::string clrEnd = "\033[0m";

    std::string myname = "Fardin Abu Ubaid";


    for (int i = 0; i < myname.size(); ++i) {
        if(myname[i]=='a' || myname[i]=='A'){
            std::cout << clrBGreen << myname[i] << clrEnd;
        }else{
            std::cout << myname[i];
        }
        
        Sleep(50); // 50 ms
    }
    return 0;
}
