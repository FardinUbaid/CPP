#include<iostream>
#include<string>

std::string getNameParts(std::string $FullName);

int main(){

    std::string $fullname_;

    std::cout<<"Enter your fullname: ";
    std::getline(std::cin>>std::ws,$fullname_);

    std::cout<<"Your names are:"<<'\n';
    std::cout<<"________________"<<'\n';
    getNameParts($fullname_);

    return 0;
}

std::string getNameParts(std::string $FullName){

    const std::string $fullName_= $FullName;

    int $firstPosOfDash = $fullName_.find(' '); // forward find
    int $lastPosOfDash = $fullName_.rfind(' '); // reverse find
    
    //std::cout<<$firstPosOfDash<<' '<<$lastPosOfDash<<' '<<$lastPosOfDash-($firstPosOfDash + 1)<<'\n';

    if($firstPosOfDash!=$lastPosOfDash){

        const std::string first_Name = $fullName_.substr(0,$firstPosOfDash); // (starting , length)
        const std::string middle_Name = $fullName_.substr($firstPosOfDash + 1,$lastPosOfDash-($firstPosOfDash + 1));
        const std::string last_Name = $fullName_.substr($lastPosOfDash);

        std::cout<<"Your first name is "<<first_Name<<'\n';
        std::cout<<"Your middle name is "<<middle_Name<<'\n';
        std::cout<<"Your last name is "<<last_Name<<'\n';

        return 0;

    }
    else{
        const std::string first_Name = $fullName_.substr(0,$firstPosOfDash);
        const std::string last_Name = $fullName_.substr($lastPosOfDash);

        std::cout<<"Your first name is "<<first_Name<<'\n';
        std::cout<<"Your last name is "<<last_Name<<'\n';

        return 0;
    }
    
}