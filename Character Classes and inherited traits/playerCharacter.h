#pragma once
#include "Character.h"
class playerCharacter :
    public Character
{
    //playerCharacter inherited atributes
public:
    playerCharacter(const std::string& name, int strength, int health);
      
    virtual void displayCharacter() const override;
};

