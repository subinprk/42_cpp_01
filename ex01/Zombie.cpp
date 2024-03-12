/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:50:18 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 17:46:23 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " is dead" << std::endl;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::change_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_name()
{
	return (name);
}

void Zombie::announce()
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}