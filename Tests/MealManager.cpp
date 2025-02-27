#include <iostream>
#include <string>
#include <cctype>

int getMonthLen(std::string month)
{
    for (int i = 0; month[i] != '\0'; ++i)
    {
        month[i] = month[i] + std::tolower(month[i]);
    }
    if (month == "january")
    {
        return 31;
    }
    else if (month == "february")
    {
        return 28;
    }
    else if (month == "march")
    {
        return 31;
    }
    else if (month == "april")
    {
        return 30;
    }
    else if (month == "may")
    {
        return 31;
    }
    else if (month == "june")
    {
        return 30;
    }
    else if (month == "july")
    {
        return 31;
    }
    else if (month == "august")
    {
        return 31;
    }
    else if (month == "september")
    {
        return 30;
    }
    else if (month == "october")
    {
        return 31;
    }
    else if (month == "november")
    {
        return 30;
    }
    else if (month == "december")
    {
        return 31;
    }
    else
    {
        return 0;
    }
}
int main()
{

    std::cout << "Enter the Name of the Month: ";
    std::string month;
    std::getline(std::cin >> std::ws, month);

    int monthLen = getMonthLen(month);
    std::cout << "The number of days in " << month << " is: " << monthLen;

    return 0;
}