#include<iostream>
#include<string>

void Line();
void RedLine();
void GreenLine();
void BlueLine();
void YellowLine();


//MARK: Main
int main(){
    
    bool inProgress = false;
    bool acknowledged = false;
    int attempts = 0;
    int maxAttempts = 7;
    

    double maxPropTime;


 RedLine();
 GreenLine();
 BlueLine();
 YellowLine();
 RedLine();

}




//MARK: Lines
void Line(){
    std::cout<<"___________________________________________________________"<<'\n';
}
void RedLine(){
    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrEnd = "\033[0m";
    std::cout<<clrBRed<<"___________________________________________________________"<<clrEnd<<'\n';
}
void GreenLine(){
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrEnd = "\033[0m";

    std::cout<<clrBGreen<<"___________________________________________________________"<<clrEnd<<'\n';
}
void BlueLine(){
    std::string clrBBlue = "\033[38;2;0;0;255m";
    std::string clrEnd = "\033[0m";

    std::cout<<clrBBlue<<"___________________________________________________________"<<clrEnd<<'\n';
}
void YellowLine(){
    std::string clrBYellow = "\033[38;2;255;255;0m";
    std::string clrEnd = "\033[0m";

    std::cout<<clrBYellow<<"___________________________________________________________"<<clrEnd<<'\n';
}
