#include<iostream>

int compare_and_swap(int *target, int expected, int new_value){
    
    int reserved_state = *target;

    if(*target == expected){
        *target = new_value;
    }
    return reserved_state;
}

int main(){

    int process1 = 1;
    int process2 = 2;
    int lock   = 0;

    while(true){
        
        while(compare_and_swap(&lock, 0 , 1) != 0){
            std::cout<<"System is executing other Process in Critical Section";
        }
        execute_critical_Section(process1);

        lock = 0;

        setReminder();
    }
    return 0;
}

void execute_critical_Section(int process){
    std::cout<<"Process : "<<process<<" is Being executed!\n Finished Critical Sections works!";
}
void setReminder(){
    std::cout<<"Reminder Set!";
}