//
// Created by Eliam on 17/02/2025.
//

#include "../includes/ScavTrap.hpp"

// ──────────────────────────────────── Constructor ────────────────────────────────────

ScavTrap::ScavTrap()
{
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap >>> 🔨 Default constructor called." << std::endl;

}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap >>> 🔨 Constructor with ARG -> (name) called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap >>> 🔨 Copy constructor called." << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;

	std::cout << "ScavTrap >>> 🔨 Copy assignment constructor called." << std::endl;
	return *this;
}

// ──────────────────────────────────── Destructor ─────────────────────────────────────
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap >>> 🪓 Destructor called." << std::endl;
}

// ────────────────────────────────────── Methods ──────────────────────────────────────
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap >>> 😈 ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << ">> 🚫 Attack : No enough points" << std::endl;
		return;
	}
	this->energyPoints -= 1;
	std::cout << "ScavTrap > 🔫 Attack : ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}