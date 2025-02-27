#include<iostream>

int main(){
    
    /*
        for loop -> 
        
        for(initialization;condition;increment)
        {
            code to be executed;
        }

    */
   int arr[5]={2,20,48,78,99};
   
    for(int i=0;i<100;i++){
        bool skip = false;
        for(int j=0;j<5;j++){
            if(i==arr[j]){
                skip = true;
                continue;
            }
        }if(skip){
            continue;
        }else{
                std::cout<<i<<"\n"; 
        }
    }

    return 0;
}