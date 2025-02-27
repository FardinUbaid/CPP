#include <iostream>

void init(std::string var);
void finished(std::string var);
void odd(std::string var, std::string var2, int dec);
void even(std::string var, std::string var2, int dec);

int main()
{
    std::cout << "Enter the Length: ";
    int limit;
    std::cin >> limit;

    std::string var[] = {"ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    std::cout << "GENERATINF ASSEMBLY CODE\n\n";

    init("Start");

    for (int i = 0; i < limit; i++)
    {
        if (i % 2 == 0)
        {
            even(var[i], var[i + 1], i + 1);
        }
        else
        {
            odd(var[i], var[i + 1], i + 1);
        }
    }
    std::cout << "\n";
    finished("END");

    return 0;
}

void init(std::string var)
{

    std::cout << " .MODEL SMALL \n .STACK 100H \n .DATA\n";
    std::cout << "    STR DB 0AH,0DH,\'CODE AUTHOR: FARDIN ABU UBAID$\'\n";
    std::cout << "    STA DB \'COUNT: $\'\n";
    std::cout << " .CODE \n MAIN PROC \n\n";
    std::cout << " MOV AX,@DATA \n MOV DS,AX \n\n MOV BL,0 \n MOV CL,0 \n\n";
    std::cout << " MOV AH,9 \n LEA DX,STR \n INT 21H \n\n";

    std::cout << " START: \n\n";

    std::cout << " CMP BL,10" << '\n';
    std::cout << " JGE " << var << "\n\n";

    std::cout << " MOV AH,2 \n\n";

    std::cout << " MOV DL,0AH \n INT 21H \n MOV DL,0DH \n INT 21H \n\n MOV AH,9 \n LEA DX,STA \n INT 21H \n\n";
    std::cout << " MOV AH,2 \n ADD BL,30H \n MOV DL,BL \n INT 21H \n\n SUB BL,30H \n INC BL \n JMP START\n\n";
}

void odd(std::string var, std::string var2, int dec)
{

    std::cout << "\n\n"
              << var << " :\n\n";
    std::cout << " CMP CL,10" << '\n';
    std::cout << " JGE " << var2 << "\n\n";

    std::cout << " MOV AH,2 \n\n";

    std::cout << " MOV DL,0AH \n INT 21H \n MOV DL,0DH \n INT 21H \n\n MOV AH,9 \n LEA DX,STA \n INT 21H \n\n";

    std::cout << " MOV AH,2 \n MOV DL,\'" << dec << "\' \n INT 21H \n";

    std::cout << " ADD CL,30H \n MOV DL,CL \n INT 21H \n\n SUB CL,30H \n INC CL \n\n";
    std::cout << " MOV BL,0 \n JMP " << var;
}
void even(std::string var, std::string var2, int dec)
{

    std::cout << "\n\n"
              << var << " :\n\n";
    std::cout << " CMP BL,10" << '\n';
    std::cout << " JGE " << var2 << "\n\n";

    std::cout << " MOV AH,2 \n\n";

    std::cout << " MOV DL,0AH \n INT 21H \n MOV DL,0DH \n INT 21H \n\n MOV AH,9 \n LEA DX,STA \n INT 21H \n\n";

    std::cout << " MOV AH,2 \n MOV DL,\'" << dec << "\' \n INT 21H \n";

    std::cout << " ADD BL,30H \n MOV DL,BL \n INT 21H \n\n SUB BL,30H \n INC BL \n\n";
    std::cout << " MOV CL,0 \n JMP " << var;
}
void finished(std::string var)
{
    std::cout << "\n\n"
              << var << ":\n\n";
    std::cout << " MOV AH,4CH \n INT 21H \n\n";
    std::cout << " MAIN ENDP \n END MAIN";
}