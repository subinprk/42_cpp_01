/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:12:03 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 21:57:35 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string &getType();
		void		setType(std::string type);
		Weapon(std::string weaponType);
		Weapon(){}
};

#endif