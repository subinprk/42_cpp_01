/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:39:02 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 14:27:47 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	//Zombie *newZombie(std::string name);
	//void	randomChump(std::string name);
	//Zombie();;
	void change_name(std::string name);
	~Zombie();
};