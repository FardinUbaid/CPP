#include<iostream>

int main(){

    int inputSize;
    std::cout<<"Number Of inputs: ";
    std::cin>>inputSize;

    std::string arr[inputSize];

    for(int m=0;m<inputSize;m++){
        std::cout<<"Input #"<<m+1<<": ";
        std::cin>>arr[m];
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"The current Inputs are:\n[ ";
    for(int n=0;n<size;n++){
        std::cout<<arr[n]<<" ";
    }std::cout<<"]\n_________________________________________________\n";

    int sizeOfArrElems[size];

    for(int i=0;i<size;i++){
        std::string alp = arr[i];
        int elemSize = 0;
        for(int j=0;alp[j]!='\0';j++){
            elemSize++;
        }
        sizeOfArrElems[i]= elemSize;
    }

    for(int k=0;k<size;k++){
        int NumOfVowel= 0;
        int NumOfConsonants= 0;

        for(int l=0;l<sizeOfArrElems[k];l++){
            std::string TempStr = arr[k];
            if(TempStr[l]=='A'||TempStr[l]=='E'||TempStr[l]=='I'||TempStr[l]=='O'||TempStr[l]=='U'){
                NumOfVowel++;
            }
            else if(TempStr[l]=='a'||TempStr[l]=='e'||TempStr[l]=='i'||TempStr[l]=='o'||TempStr[l]=='u'){
                NumOfVowel++;
            }else{
                NumOfConsonants++;
            }
        }   
            std::cout<<"String #"<<k+1<<"-> "<<arr[k]<<'\n';
            std::cout<<" ->Number of Vowels In("<<arr[k]<<") : "<<NumOfVowel<<'\n';
            std::cout<<" ->Number of Consonants In("<<arr[k]<<") : "<<NumOfConsonants<<'\n';
            std::cout<<"_________________________________________________\n";
    }

    return 0;
}