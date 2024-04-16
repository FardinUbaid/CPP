#include<iostream>

int main(){


    int NumOfdirec;
    std::cout<<"Number of directions: ";
    std::cin>>NumOfdirec;

    std::string directions[NumOfdirec];
    std::cout<<"Allowed Inputs:\n**********************\nr R Right \tright\nl L Left \tleft\nf F Forward \tforward\nb B Backward \tbackward\n**********************\n";
    std::cout<<"The directions:\n";
    for(int i=0;i<NumOfdirec;i++){
        std::cin>>directions[i];
    }
    std::cout<<"Misguided directions will be :";
    for(int i=0;i<NumOfdirec;i++){
        if(directions[i]=="l"||directions[i]=="L"||directions[i]=="left"||directions[i]=="left"){
            std::cout<<"Right ";
        }
        if(directions[i]=="r"||directions[i]=="R"||directions[i]=="right"||directions[i]=="Right"){
            std::cout<<"Left ";
        }
        if(directions[i]=="f"||directions[i]=="F"||directions[i]=="forward"||directions[i]=="Forward"){
            std::cout<<"Backward ";
        }
        if(directions[i]=="b"||directions[i]=="B"||directions[i]=="backward"||directions[i]=="Backward"){
            std::cout<<"Forward ";
        }
    }



    return 0;
}