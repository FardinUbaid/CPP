#include<iostream>

bool test_and_set(bool *target){
    
    bool reserved_State = *target;
    *target = true;
    
    return reserved_State;
}

int main(){

    int process1 = 1;
    int process2 = 2;

    bool lock   = false;

   do{
        while(test_and_set(&lock)){
            std::cout<<"System is executing other Process in Critical Section";
        }

        execute_critical_Section(process1);

        lock = false;

        setReminder();

    } while(true);

    return 0;
}

void execute_critical_Section(int process){
    std::cout<<"Process : "<<process<<" is Being executed!\n Finished Critical Sections works!";
}
void setReminder(){
    std::cout<<"Reminder Set!";
}