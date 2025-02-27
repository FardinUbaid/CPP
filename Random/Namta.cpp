#include<iostream>

int main(){

    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            std::cout<<i<<" X "<<j<<" = "<<i*j<<'\n';
        }
        std::cout<<"_______________________________________\n";
    }

    return 0;
}

