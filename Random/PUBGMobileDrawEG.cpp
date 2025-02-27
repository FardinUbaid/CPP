#include <iostream>
#include <cstdlib>
#include <ctime>

int RandomID(int min, int max);
void DisplayItems(int Draw, int &Countitem_ID1, int &Countitem_ID2, int &Countitem_ID3, int &Countitem_ID4, int &Countitem_ID5);

int main() {
    std::srand(std::time(0)); 

    while (true) {
        int choice;
        std::cout << "Draw once(10 UC)\nDraw Ten Times(100 UC)\n_________________________________\nYour Choice(1 or 10): ";
        std::cin >> choice;

        if (choice == 1) {
            int Draw = RandomID(1, 100);
            int Countitem_ID1 = 0, Countitem_ID2 = 0, Countitem_ID3 = 0, Countitem_ID4 = 0, Countitem_ID5 = 0;
            DisplayItems(Draw, Countitem_ID1, Countitem_ID2, Countitem_ID3, Countitem_ID4, Countitem_ID5);
            std::cout << "\n";
        } else if (choice > 1) {
            int Countitem_ID1 = 0, Countitem_ID2 = 0, Countitem_ID3 = 0, Countitem_ID4 = 0, Countitem_ID5 = 0;

            for (int randcount = 0; randcount < choice; randcount++) {
                int Draw = RandomID(1, 100);
                DisplayItems(Draw, Countitem_ID1, Countitem_ID2, Countitem_ID3, Countitem_ID4, Countitem_ID5);
                std::cout << "\t";

                if ((randcount + 1) % 5 == 0) {
                    std::cout << "\n";
                }
            }

            std::cout << "\n\nTotal Items Obtained ("<<choice<<" Draws):\n";
            std::cout << "Epic Items: " << Countitem_ID1 << "\n";
            std::cout << "Legendary Items: " << Countitem_ID2 << "\n";
            std::cout << "Common Items: " << Countitem_ID3 << "\n";
            std::cout << "Mythic Items: " << Countitem_ID4 << "\n";
            std::cout << "Rare Items: " << Countitem_ID5 << "\n\n";
        } else {
            std::cout << "Invalid Choice! Try again" << std::endl;
        }
    }

    return 0;
}

int RandomID(int min, int max) {
    int random_number = std::rand();
    return random_number % (max - min + 1) + min;
}

void DisplayItems(int Draw, int &Countitem_ID1, int &Countitem_ID2, int &Countitem_ID3, int &Countitem_ID4, int &Countitem_ID5) {
    int item_ID1 = 10;
    int item_ID2 = 30;
    int item_ID3 = 47;
    int item_ID4 = 88;
    int item_ID5 = 56;

    std::string clrBRed = "\033[38;2;255;0;0m";
    std::string clrBGreen = "\033[38;2;0;255;0m";
    std::string clrBYellow = "\033[38;2;255;255;0m";
    std::string clrBBlue = "\033[38;2;0;0;255m";  
    std::string clrEnd = "\033[0m";

    if (Draw == item_ID1) {
        Countitem_ID1++;
        std::cout << clrBBlue << "Epic Item" << clrEnd;
    } else if (Draw == item_ID2) {
        Countitem_ID2++;
        std::cout << clrBRed << "Legendary" << clrEnd;
    } else if (Draw == item_ID3) {
        Countitem_ID3++;
        std::cout << clrBBlue << "Common" << clrEnd;
    } else if (Draw == item_ID4) {
        Countitem_ID4++;
        std::cout << clrBRed << "Mythic" << clrEnd;
    } else if (Draw == item_ID5) {
        Countitem_ID5++;
        std::cout << clrBGreen << "Rare" << clrEnd;
    } else {
        std::cout << "10 Silver";
    }
}
