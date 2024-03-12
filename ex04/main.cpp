/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:22:46 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 23:26:59 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	put_replace(char **argv, const std::string str, std::ofstream file)
{
	int	pos;
	for(int i = 0; i < str.size(); i ++)
	{
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
		return ;
	std::string tmp(argv[1]);
	std::ofstream file_out(tmp + ".replace");
	while(!file_in.eof() && file_in >> std::noskipws >> c)
		str += c;
	file_in.close();
	put_replace(argv, str, file_out);
	return (0);
}