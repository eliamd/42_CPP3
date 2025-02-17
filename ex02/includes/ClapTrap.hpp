#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	// ────────────────────────────────── Constructor ─────────────────────────────────
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	// ────────────────────────────────── Destructor ──────────────────────────────────
	~ClapTrap();
	// ────────────────────────────────── Methods ─────────────────────────────────────
	void attack(const std::string& target);
	void takeDamage(const unsigned int amount);
	void beRepaired(const unsigned int amount);
};

#endif //CLAPTRAP_HPP
