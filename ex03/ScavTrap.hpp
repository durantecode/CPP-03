/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:36:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 17:46:16 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap();

	public:
		ScavTrap(std::string name);
		ScavTrap (const ScavTrap &toCopy);
		ScavTrap& operator = (ScavTrap const &toCopy);
		~ScavTrap();

		void attack(std::string const &target);
		void guardGate(void);
};

#endif
