#include<iostream>

int main(){

    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrBYellow = "\033[38;2;255;255;0m";
    std::string clrBBlue = "\033[38;2;0;0;255m";
    std::string clrEnd = "\033[0m";


    int totalIdle=0;
    int totalBusy=0;
    
    bool channel_Status[]={1,0,1,1,0,1};
    int status_size = sizeof(channel_Status)/sizeof(channel_Status[0]);
    
    for(int j=0;j<status_size;j++){
    
        std::string dataset[]={"fardin","cr7","Prottoy"};
        
        bool channel_Idle = channel_Status[j];
        
        int dataSentCount = 0 ;

        int DataSize = sizeof(dataset)/sizeof(dataset[0]);

        if(channel_Idle){
            totalIdle++;
            std::cout<<clrBGreen<<"\n\nChannel Idle!\ninitiating data transmission!\n\n"<<clrEnd;
            for(int i = 0; i<DataSize;i++){
                std::cout<<clrBBlue<<"Sending -> "<<clrEnd<<dataset[i]<<'\n';
                dataSentCount++;
            }
        }else{
            totalBusy++;
            std::cout<<clrBRed<<"\n\nChannel Busy! Data transmission Paused!\n";
            std::cout<<"Since system is busy ! Please wait for back off time\n"<<clrEnd;
            std::cout<<"Then Try again when system is Available!\n";
        }

        if(dataSentCount>1){
            std::cout<<clrBRed<<"\nCollition has occured!"<<clrEnd<<clrBYellow<<"\nMultiple data was sent at the same time!\n"<<clrEnd;
        }else if(dataSentCount==1){
            std::cout<<clrBGreen<<"\nData sent Successfully!!!\nNo collision occured!\n"<<clrEnd;
        }
    }

    std::cout<<"System was online for a total of :"<<clrBGreen<<totalIdle<<clrEnd<<" times!\n";
    std::cout<<"System was Offline for a total of :"<<clrBRed<<totalBusy<<clrEnd<<" times!\n";
    

    return 0;
}
