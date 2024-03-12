/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:44:15 by subpark           #+#    #+#             */
/*   Updated: 2024/03/12 19:02:25 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <string>

std::string num2string(int number)
{
    std::stringstream ss;
    ss << number;
    return(ss.str());
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *multiZombie;
    
    multiZombie = new Zombie[N];
    for(int i = 0; i < N; i ++)
    {
        multiZombie[i].change_name(name + " " + num2string(i + 1));
        multiZombie[i].announce();
    }
    return (multiZombie);
}