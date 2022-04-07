/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:36:50 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/07 22:15:50 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	*this = toCopy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_hitPoints = toCopy.getHitPoints();
	this->m_energyPoints = toCopy.getEnergyPoints();
	this->m_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->m_name << " attacks " << target;
	std::cout << " causing " << this->m_attackDamage << " points of damage" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->m_name << " has entered in gatekeeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}