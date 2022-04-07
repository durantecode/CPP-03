/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:02:17 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/07 20:58:24 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string m_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap (const DiamondTrap &toCopy);
		DiamondTrap& operator = (DiamondTrap const &toCopy);
		~DiamondTrap();

		void attack(std::string const &target);
		void whoAmI(void);
};

#endif