/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:42:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 17:44:10 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap fiera("Fiera");
		fiera.attack("Máquina");
		fiera.takeDamage(6);
		fiera.beRepaired(4);
		fiera.takeDamage(3);
		fiera.highFivesGuys();
		fiera.beRepaired(8);
		fiera.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap figura("Figura");
		figura.attack("Chris Rock");
		figura.takeDamage(6);
		figura.beRepaired(4);
		figura.takeDamage(3);
		figura.guardGate();
		figura.beRepaired(8);
		figura.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap dur("Máquina");
		dur.attack("Thor");
		dur.takeDamage(6);
		dur.beRepaired(4);
		dur.takeDamage(3);
		dur.beRepaired(8);
		dur.takeDamage(17);
	}
	return (0);
}
