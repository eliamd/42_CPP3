//
// Created by Eliam on 17/02/2025.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class FragTrap : public ClapTrap
{
private:
public:
	// ────────────────────────────────── Constructor ─────────────────────────────────
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &copy);
	// ────────────────────────────────── Destructor ──────────────────────────────────
	~FragTrap();
	// ───────────────────────────────────── Methods ─────────────────────────────────────
	void highFivesGuys();
};



#endif //FRAGTRAP_HPP
