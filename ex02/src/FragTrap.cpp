//
// Created by Eliam on 17/02/2025.
//

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "default";
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;

	std::cout << "FragTrap >>> 🔨 Default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "FragTrap >>> 🔨 Constructor with ARG -> (name) called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap >>> 🔨 Copy constructor called." << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy)
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;

	std::cout << "FragTrap >>> 🔨 Copy assignment constructor called." << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap >>> 🪓 Destructor called." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap > 🙌 High Fives Guys ?!" << std::endl;
}

