/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:12:57 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 22:19:13 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (weapon != NULL)
		std::cout << name << " attack with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = new Weapon;
	*(this->weapon) = weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	setWeapon(weapon);
}

HumanB::~HumanB()
{
	if (weapon != NULL)
		delete weapon;
}