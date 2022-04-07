/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:41:09 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/07 22:45:34 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string m_name;
		int m_hitPoints;
		int m_energyPoints;
		int m_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap (const ClapTrap &toCopy);
		ClapTrap& operator = (ClapTrap const &toCopy);
		~ClapTrap();

		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif