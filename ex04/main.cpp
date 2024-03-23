/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:22:46 by siun              #+#    #+#             */
/*   Updated: 2024/03/23 21:00:17 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	put_replace(char **argv, const std::string str, std::ofstream &file)
{
	// for (int i = 0; i < sizeof(str)/sizeof(str[0]); i ++)
	// {
	// 	std::cout << str[i];
	// }
	int	pos;
	for(int i = 0; i < (int)str.size(); i ++)
	{
		//std::cout << str[i];
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			file << argv[3];
			i +=std::string(argv[2]).size() - 1;
		} 
		else
			file << str[i];
	}
	file.close();
	return (0);
}

int main(int argc, char **argv)
{
	std::string str;
	char c;

	if(argc != 4)
		return (1);
	std::ifstream file_in(argv[1]);
	if (!file_in.is_open())
		return (1);
	std::string tmp(argv[1]);
	tmp = tmp + ".replace";
	std::ofstream file_out(tmp.c_str());
	if (!file_out.is_open())
		return (1);
	while(!file_in.eof() && file_in >> std::noskipws >> c)
		str += c;
	file_in.close();
	put_replace(argv, str, file_out);
	return (0);
}