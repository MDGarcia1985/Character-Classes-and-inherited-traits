
//main game loop
#include "game.h"
#include <string>
#include <iostream>
#include "playerCharacter.h"
#include "Enemy.h"
#include "EnemyB.h"
#include "EnemyA.h"
#include "EnemyC.h"



int main()
{
    displayTitle();
    std::string userName = getUserName();
    displayWelcome(userName);

   //Create a charater instance using the user's name
    playerCharacter player(userName, 10, 100);
    player.displayCharacter();

    //print out character creation
    std::cout << "Character Created: " << player.getName() << " with Strength: " << player.getStrength() << "and Health: " << player.getHealth() << std::endl;
   
    EnemyA enemy;
        enemy.displayCharacter();

 
    return 0;
}