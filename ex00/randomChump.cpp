/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:16:43 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 14:30:19 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie newzombie =  Zombie();
	newzombie.name = name;

	std::cout << newzombie.name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}