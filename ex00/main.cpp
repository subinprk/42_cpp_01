/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:45 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 17:40:01 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie *ptrZombie;
//	Zombie justZombie;
	
	ptrZombie = newZombie("subin");
	ptrZombie->announce();
	randomChump("not subin");
	delete ptrZombie;
}