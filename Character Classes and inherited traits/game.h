//game header file

#pragma once
#include <string>
#include "Character.h"
#include "Enemy.h"

void displayTitle();
std::string getUserName();
void displayWelcome(const std::string& userName);
void displayCharcter();