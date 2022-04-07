/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:05:01 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/07 20:21:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap (const FragTrap &toCopy);
		FragTrap& operator = (FragTrap const &toCopy);
		~FragTrap();

		void highFivesGuys(void);
};

#endif