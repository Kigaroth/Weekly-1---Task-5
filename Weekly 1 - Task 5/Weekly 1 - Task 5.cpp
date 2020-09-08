// Weekly 1 - Task 5.cpp 

#include <iostream>
#include <string>
#include <windows.h> //included in order to achieve textcolor//

int main()
{
    std::string rows[4] = { "A", "B", "C", "D" };

    //Column header//
    std::cout << "   ";
    for (int i = 1; i <= 6; i++) {
        std::cout << " " << i << "  ";
    }
    std::cout << "\n";

    //Horizontal line//
    std::cout << "   ";
    for (int j = 0; j < 6; j++) {
        std::cout << "--- ";
    }
    std::cout << "\n";

    //Printing rows//
    for (int i = 0; i < sizeof(rows) / sizeof(rows[0]); i++) {

        //Print 6 columns//
        std::cout << rows[i] << " |";
        for (int j = 0; j < 6; j++) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //textcolor change to red for *//
            std::cout << " * ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //textcolor changes back to white//
            std::cout << "|";
        }
        std::cout << " " << rows[i] << "\n";
        //Print Horizontal line//
        std::cout << "  ";
        for (int j = 0; j < 6; j++) {
            std::cout << "--- ";
        }
        std::cout << "\n";
    }

            std::cout << "   ";
            for (int i = 1; i <= 6; i++) {
                std::cout << " " << i << "  ";
            }
    
}

