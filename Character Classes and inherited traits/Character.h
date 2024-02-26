//character header file

#pragma once
#include <string>


class Character
{
private:
	std::string mName;
	int mStrength;
	int mHealth;

public:
	Character();
	Character(const std::string& name, int strength, int health);

	//getters
	std::string getName() const;
	int getStrength() const;
	int getHealth() const;

	//setters
	void setName(const std::string& name);
	void setStrength(int strength);
	void setHealth(int health);

	virtual void displayCharacter() const = 0;
};