/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:45 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 14:26:29 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *ptrZombie;
	Zombie justZombie;
	
	ptrZombie = new Zombie();
	justZombie = Zombie::randomChump("not subin")
}