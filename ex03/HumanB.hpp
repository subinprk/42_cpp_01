/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:13:03 by siun              #+#    #+#             */
/*   Updated: 2024/03/21 19:16:42 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
	public:
		void attack();
		void setWeapon(Weapon weapon);
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
};

#endif