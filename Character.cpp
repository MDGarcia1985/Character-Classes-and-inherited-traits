//character object class file
#include "Character.h"


// Character.cpp


Character::Character() : mName(""), mStrength(0), mHealth(0) {}

Character::Character(const std::string& name, int strength, int health)
    : mName(name), mStrength(strength), mHealth(health) {}

std::string Character::getName() const 
{
    return mName;
}

int Character::getStrength() const 
{
    return mStrength;
}

int Character::getHealth() const 
{
    return mHealth;
}

void Character::setName(const std::string& name) 
{
    mName = name;
}

void Character::setStrength(int strength) 
{
    mStrength = strength;
}

void Character::setHealth(int health) 
{
    mHealth = health;
}