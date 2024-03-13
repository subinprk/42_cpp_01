/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:10:57 by siun              #+#    #+#             */
/*   Updated: 2024/03/13 18:02:40 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-"\
				"double-cheese-triple-pickle-special-ketchup burger. "\
				"I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe addding extra bacon costs more money. "\
				"You didn't put enough bacon in my burger! "\
				"If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to havee some extra bacon for free. "\
				"I've coming for years whereas you started working here since last month"
				<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
											&Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i ++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}