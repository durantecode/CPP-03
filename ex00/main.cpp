/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:42:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/19 16:42:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap dur("Dur");

	dur.attack("Thor");
	dur.takeDamage(6);
	dur.beRepaired(4);
	dur.takeDamage(3);
	dur.beRepaired(8);
	dur.takeDamage(17);
	return (0);
}
