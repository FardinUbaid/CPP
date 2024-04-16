#include<iostream>

int LinearSearch(int arr[],int size,int target);
//MARK: Main Function
int main(){

    int size;
    std::cout<<"Enter the number of elements: ";
    std::cin>>size;
    int array[size];
    std::cout<<"The elements are ->\n";
    for(int i=0;i<size;i++){
        std::cout<<"Element #"<<i+1<<"\t:";
        std::cin>>array[i];
    }
    std::cout<<"The array is now : [ ";
    for(int i=0;i<size;i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"]";

    int target;
    std::cout<<"\nThe element to find: ";
    std::cin>>target;
    int index=LinearSearch(array,size,target);

    if(index!=0){
        std::cout<<"The Element is at index: "<<index;
    }else{
        std::cout<<"Element not found!";
    }

    return 0;
}
//MARK: Linear Search
int LinearSearch(int arr[],int size,int target){

    int index;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }
    return index;
}
