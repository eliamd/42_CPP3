//
// Created by Eliam on 17/02/2025.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>



class ScavTrap : public ClapTrap
{
private:
public:
  // ────────────────────────────────── Constructor ─────────────────────────────────
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &copy);
  ScavTrap &operator=(const ScavTrap &copy);
  // ────────────────────────────────── Destructor ──────────────────────────────────
  ~ScavTrap();
  // ───────────────────────────────────── Methods ─────────────────────────────────────
  void guardGate();
  void attack(const std::string &target);
};



#endif //SCAVTRAP_HPP
