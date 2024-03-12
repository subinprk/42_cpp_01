/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:45 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 17:59:05 by subpark          ###   ########.fr       */
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
	randomChump("not subin");
	delete ptrZombie;
}