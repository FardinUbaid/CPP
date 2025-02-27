#include<iostream>
#include<string>

int main(){

    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrEnd = "\033[0m";

    std::string msg;
    std::cout<<"Insert your messege :";
    std::getline(std::cin>>std::ws,msg);

    std::cout<<"\n\nLength of the messege is:"<<msg.length()<<" Characters."<<'\n';
    std::cout<<"Encoded Morse Code for the messege is :\n\n";

    std::string skipped;
    int skipCount = 0;

    for(int i=0; msg[i]!='\0'; i++){
        char str = msg[i];

        switch (str)
        {   
            //MARK:Alphs
            case 'a':
                    case 'A':
                            std::cout<<".- ";
            break;

            case 'b':
                    case 'B':
                            std::cout<<"-... ";
            break;

            case 'c':
                    case 'C':
                            std::cout<<"-.-. ";
            break;

            case 'd':
                    case 'D':
                            std::cout<<"-.. ";
            break;

            case 'e':
                    case 'E':
                            std::cout<<". ";
            break;

            case 'f':
                    case 'F':
                            std::cout<<"..-. ";
            break;

            case 'g':
                    case 'G':
                            std::cout<<"--. ";
            break;

            case 'h':
                    case 'H':
                            std::cout<<".... ";
            break;

            case 'i':
                    case 'I':
                            std::cout<<".. ";
            break;

            case 'j':
                    case 'J':
                            std::cout<<".--- ";
            break;

            case 'k':
                    case 'K':
                            std::cout<<"-.- ";
            break;

            case 'l':
                    case 'L':
                            std::cout<<".-.. ";
            break;

            case 'm':
                    case 'M':
                            std::cout<<"-- ";
            break;

            case 'n':
                    case 'N':
                            std::cout<<"-. ";
            break;

            case 'o':
                    case 'O':
                            std::cout<<"--- ";
            break;

            case 'p':
                    case 'P':
                            std::cout<<".--. ";
            break;

            case 'q':
                    case 'Q':
                            std::cout<<"--.- ";
            break;

            case 'r':
                    case 'R':
                            std::cout<<".-. ";
            break;

            case 's':
                    case 'S':
                            std::cout<<"... ";
            break;

            case 't':
                    case 'T':
                            std::cout<<"- ";
            break;

            case 'u':
                    case 'U':
                            std::cout<<"..- ";
            break;

            case 'v':
                    case 'V':
                            std::cout<<"...- ";
            break;

            case 'w':
                    case 'W':
                            std::cout<<".-- ";
            break;

            case 'x':
                    case 'X':
                            std::cout<<"-..- ";
            break;

            case 'y':
                    case 'Y':
                            std::cout<<"-.-- ";
            break;

            case 'z':
                    case 'Z':
                            std::cout<<"--.. ";
            break;
            //MARK:Numeric
            case '1':
                std::cout<<".---- ";
            break;
            case '2':
                std::cout<<"..--- ";
            break;
            case '3':
                std::cout<<"...-- ";
            break;
            case '4':
                std::cout<<"....- ";
            break;
            case '5':
                std::cout<<"..... ";
            break;
            case '6':
                std::cout<<"-.... ";
            break;
            case '7':
                std::cout<<"--... ";
            break;
            case '8':
                std::cout<<"---.. ";
            break;
            case '9':
                std::cout<<"----. ";
            break;
            case '0':
                std::cout<<"----- ";
            break;

            //MARK: Specials
            case ',':
                std::cout<<"..-.. ";
            break;
            case '?':
                std::cout<<"..--.. ";
            break;
            case ';':
                std::cout<<"-.-.- ";
            break;
            case ':':
                std::cout<<"---... ";
            break;
            case '/':
                std::cout<<"-..-. ";
            break;
            case '+':
                std::cout<<".-.-. ";
            break;
            case '-':
                std::cout<<"-....- ";
            break;
            case '=':
                std::cout<<"-...- ";
            break;
            case '(':
                std::cout<<"-.--.- ";
            break;
            case ')':
                std::cout<<"-.--.- ";
            break;

            //MARK:Stops
            case ' ':
                std::cout<<"       ";
            break;
            case '.':
                std::cout<<".-.-.- ";
            break;
                        
        default:
            skipped[skipCount] = str;
            skipCount++;
            continue;
        }
    }
    if(skipCount!=0){
        std::cout<<"\n\nThe skipped characters are :\n";

        for(int j=0;j<skipCount;j++){
            std::cout<<'\t'<<clrBRed<<skipped[j]<<clrEnd;
        }
    }
    
    return 0;
}