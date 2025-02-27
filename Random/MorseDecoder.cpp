#include<iostream>
#include<string>

int main() {
    std::string morseMsg;
    std::cout << "Enter the Morse code :\n";
    std::getline(std::cin >> std::ws, morseMsg);

    std::string decodedMsg = "";
    std::string morseLetter = "";
    int spaceCount = 0;

    for (int i = 0; i <= morseMsg.length(); i++) {
        
        if (morseMsg[i] == ' ' || morseMsg[i] == '\0') {
            if (morseLetter == ".-")            decodedMsg += 'A';
            else if (morseLetter == "-...")     decodedMsg += 'B';
            else if (morseLetter == "-.-.")     decodedMsg += 'C';
            else if (morseLetter == "-..")      decodedMsg += 'D';
            else if (morseLetter == ".")        decodedMsg += 'E';
            else if (morseLetter == "..-.")     decodedMsg += 'F';
            else if (morseLetter == "--.")      decodedMsg += 'G';
            else if (morseLetter == "....")     decodedMsg += 'H';
            else if (morseLetter == "..")       decodedMsg += 'I';
            else if (morseLetter == ".---")     decodedMsg += 'J';
            else if (morseLetter == "-.-")      decodedMsg += 'K';
            else if (morseLetter == ".-..")     decodedMsg += 'L';
            else if (morseLetter == "--")       decodedMsg += 'M';
            else if (morseLetter == "-.")       decodedMsg += 'N';
            else if (morseLetter == "---")      decodedMsg += 'O';
            else if (morseLetter == ".--.")     decodedMsg += 'P';
            else if (morseLetter == "--.-")     decodedMsg += 'Q';
            else if (morseLetter == ".-.")      decodedMsg += 'R';
            else if (morseLetter == "...")      decodedMsg += 'S';
            else if (morseLetter == "-")        decodedMsg += 'T';
            else if (morseLetter == "..-")      decodedMsg += 'U';
            else if (morseLetter == "...-")     decodedMsg += 'V';
            else if (morseLetter == ".--")      decodedMsg += 'W';
            else if (morseLetter == "-..-")     decodedMsg += 'X';
            else if (morseLetter == "-.--")     decodedMsg += 'Y';
            else if (morseLetter == "--..")     decodedMsg += 'Z';
            else if (morseLetter == ".----")    decodedMsg += '1';
            else if (morseLetter == "..---")    decodedMsg += '2';
            else if (morseLetter == "...--")    decodedMsg += '3';
            else if (morseLetter == "....-")    decodedMsg += '4';
            else if (morseLetter == ".....")    decodedMsg += '5';
            else if (morseLetter == "-....")    decodedMsg += '6';
            else if (morseLetter == "--...")    decodedMsg += '7';
            else if (morseLetter == "---..")    decodedMsg += '8';
            else if (morseLetter == "----.")    decodedMsg += '9';
            else if (morseLetter == "-----")    decodedMsg += '0';
            else if (morseLetter == "..--..")   decodedMsg += '?';
            else if (morseLetter == ".-.-.-")   decodedMsg += '.';
            else if (morseLetter == "-..-.")    decodedMsg += '/';

            morseLetter = ""; 

            if (morseMsg[i] == ' ') {
                spaceCount++;
            }

            
            if (spaceCount == 7) {
                decodedMsg += ' ';
                spaceCount = 0;
            }
        } else {
            morseLetter += morseMsg[i];
            spaceCount = 0; 
        }
    }
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrEnd = "\033[0m";

    std::cout << "\nDecoded message:\n" <<clrBGreen<<decodedMsg <<clrEnd<< '\n';

    return 0;
}
