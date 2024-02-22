//game functions
#include "game.h"
#include <string>
#include <iostream>

//Function to display the games title
void displayTitle()
{
    std::cout << "\n\n\t ***Shattered Order: Fractured Shadows of the Wasteland ***" << std::endl;
}



//funtion to get the players user name
std::string getUserName()
{
    std::string userName;
    std::cout << "\n\n What is your name? ";
    std::getline(std::cin, userName);
    return userName;
}



//function to welcome the player to the game. The semicolon goes after the user name once it's entered.
void displayWelcome(const std::string& userName)
{
    std::cout << "\nWelcome, " << userName << ";" << std::endl;
}