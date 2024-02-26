//playerCharacter .cpp file

#include "playerCharacter.h"
#include <iostream>
#include "Character.h"

playerCharacter::playerCharacter(const std::string& name, int strength, int health)
	:Character(name, strength, health)
{

}

void playerCharacter::displayCharacter() const
{
	std::cout << "Player Character: " << "Strength: " << getStrength() << ", Health: " << getHealth() << std::endl;
}