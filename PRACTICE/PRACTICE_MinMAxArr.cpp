#include<iostream>

int main(){

    int arrSiz;

    std::cout<<"Enter the number of elements of the array:";
    std::cin>>arrSiz;

    int arr[arrSiz];

    for(int i=0;i<arrSiz;i++){

        std::cout<<"Enter the #"<<i+1<<" element:";
        std::cin>>arr[i];

    }
    int min=0;
    int max=0;

    for(int i=0;i<arrSiz;i++){
        if(arr[i]>max){
            max=arr[i];
        }else{
            min=arr[i];
        }
    for(int j=arrSiz;j<=0;j--){

        if(arr[j]>max){
            max=arr[j];
        }else{
            min=arr[j];
        }
    }
    }

    std::cout<<"The min is: "<<min<<"\nThe max is: "<<max;

    return 0;
}