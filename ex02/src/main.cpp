/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:04:41 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/14 12:09:26 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main( void ) {

	{
		ClapTrap pierre("pierre");
		ClapTrap luc("luc");
		ClapTrap max("max");
		ClapTrap jean(max);
		ClapTrap voleur;
		voleur = luc;

		voleur.attack("marie");
		jean.attack("robert");

		luc.beRepaired(2);
		voleur.beRepaired(1);

		luc.takeDamage(2);
	}

	std::cout << "------------------------------" << std::endl;
	{
		ScavTrap apierre("pierre");
		ScavTrap aluc("luc");
		ScavTrap amax("max");
		ScavTrap ajean(amax);
		ScavTrap avoleur;
		avoleur = aluc;

		avoleur.attack("marie");
		ajean.attack("robert");

		aluc.beRepaired(2);
		avoleur.beRepaired(1);

		aluc.takeDamage(2);
		aluc.guardGate();
	}
	std::cout << "------------------------------" << std::endl;
	{
		FragTrap bpierre("pierre");
		FragTrap bluc("luc");
		FragTrap bmax("max");
		FragTrap bjean(bmax);
		FragTrap bvoleur;
		bvoleur = bluc;

		bvoleur.attack("marie");
		bjean.attack("robert");

		bluc.beRepaired(2);
		bvoleur.beRepaired(1);

		bluc.takeDamage(2);
		bluc.highFivesGuys();
	}
	return 0;
}