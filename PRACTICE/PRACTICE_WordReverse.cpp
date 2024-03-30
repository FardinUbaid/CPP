#include<iostream>
#include<string>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence:";
    std::getline(std::cin >> std::ws, sentence);

    int ws = 0;
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            ws++;
        }
    }

    int wsPos[ws + 1];
    int posIndex = 0;
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            wsPos[posIndex] = i;
            posIndex++;
        }
    }

    wsPos[ws] = sentence.length();

    std::string SubStrings[ws + 1];
    int substringCount = 0;
    int initial_strIndex = 0;
    for(int i = 0; i <= ws; i++) {
        SubStrings[substringCount] = sentence.substr(initial_strIndex, wsPos[i] - initial_strIndex);
        substringCount++;
        initial_strIndex = wsPos[i] + 1; 
    }

    for(int i = ws; i >= 0; i--) {
        std::cout << SubStrings[i];
        if(i > 0)
            std::cout << " ";
    }

    return 0;
}
