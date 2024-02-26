//Enemy class header file

#pragma once
#include "Character.h"



class Enemy :
    public Character
{
public:
    Enemy(const std::string& name, int strength, int health);
    virtual void displayCharacter() const override;
};