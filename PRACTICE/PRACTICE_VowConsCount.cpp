#include<iostream>

void getVowlConsCount(std::string str,int &vowel,int &consonant);

int main(){

    int vowel;
    int consonant;
    std::string str;
    std::cout<<"Enter a Word/Sentence :";
    std::getline(std::cin>>std::ws,str);

    getVowlConsCount(str,vowel,consonant);

    std::cout<<"In the input there is\nVowels: "<<vowel<<"\nConsonants:"<<consonant;

    return 0;
}


void getVowlConsCount(std::string str,int &vowel,int &consonant){

    vowel=0;
    consonant=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }else if (isalpha(str[i])){
            consonant++;
        }
    }
}
