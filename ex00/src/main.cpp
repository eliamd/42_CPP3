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

int main( void ) {

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

	return 0;
}