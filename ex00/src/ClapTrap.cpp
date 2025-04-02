#include "../includes/ClapTrap.hpp"

// ────────────────────────────────── Constructor ─────────────────────────────────

ClapTrap::ClapTrap()
{
	this->name = "default";
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;

	std::cout << ">>> 🔨 Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;

	std::cout << ">>> 🔨 Constructor with ARG -> (name) called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
	std::cout << ">>> 🔨 Copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;

	std::cout << ">>> 🔨 Copy assignment constructor called." << std::endl;
	return *this;
}

// ────────────────────────────────── Destructor ──────────────────────────────────


ClapTrap::~ClapTrap()
{
	std::cout << ">>> 🪓 Destructor called." << std::endl;
}

// ────────────────────────────────── Methods ─────────────────────────────────────


void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << ">> 🚫 Attack :" << this->name << " has no enough points (this->energyPoints : " << this->energyPoints
		<< ")  (this->hitPoints " << this->hitPoints << ")" <<  std::endl;
		return;
	}
	this->energyPoints -= 1;
    std::cout << "> 🔫 Attack : ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0)
	{
	this->hitPoints -= amount;
	std::cout << "> ☹️ Take Damage : ClapTrap " << this->name << " take damage , loosing "<< amount <<" of HP !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
		if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << ">> 🚫 Repaired : No enough points" << std::endl;
		return;
	}
	if (amount > 0)
	{
		this->hitPoints += amount;
		std::cout << "> ❤️‍🩹 Repaired : ClapTrap " << this->name << " repaired himself , adding "<< amount <<" of HP !" << std::endl;
	}
}
