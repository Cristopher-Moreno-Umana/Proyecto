#include "Movie.h"
#include "Room.h"
#include "Header.h"
int main()
{
    std::string mainMenuOption = menu();

    
    if (mainMenuOption == "1")
    {
        std::cout << file();
    }
    if (mainMenuOption == "2")
    {
        std::cout << "Prueba";
    }
}