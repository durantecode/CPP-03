/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:03:23 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/07 22:00:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) 
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	this->m_hitPoints = FragTrap::m_hitPoints;
	this->m_energyPoints = ScavTrap::m_energyPoints;
	this->m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy)
{
	*this = toCopy;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_hitPoints = toCopy.getHitPoints();
	this->m_energyPoints = toCopy.getEnergyPoints();
	this->m_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap Name: " << this->m_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::m_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}