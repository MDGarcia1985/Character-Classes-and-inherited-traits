
//main game loop
#include "game.h"
#include <string>
#include <iostream>




int main()
{
    displayTitle();
    std::string userName = getUserName();
    displayWelcome(userName);

   //Create a charater instance using the user's name
    Character playerCharacter(userName, 10, 100);

    //print out character creation
    std::cout << "Character Created: " << playerCharacter.getName() << " with Strength: " << playerCharacter.getStrength() << "and Health: " << playerCharacter.getHealth() << std::endl;
        
 
    return 0;
}