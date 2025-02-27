#include<iostream>

void acquire(){
    while (!available)
    {
        std::cout<<"Other Process is being executed!";
    }
    available = false;
    
}

void release(){
    available = true;
}

int main(){

    int process1 = true;
    int process2 = true;

    bool available = true;

    while(process1){
        acquire();
        execute_critical_Section(process1);
        release();
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