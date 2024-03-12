/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:50:18 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 22:03:08 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " is dead" << std::endl;
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