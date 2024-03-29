/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:04:23 by subpark           #+#    #+#             */
/*   Updated: 2024/03/12 21:10:01 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str("HI THIS IS BRAIN");

    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "string address: "<< &str << std::endl;
    std::cout << "stringPTR: "<< stringPTR << std::endl;
    std::cout << "stringREF address:" << &stringREF << std::endl;
    std::cout <<  "stringSTR string: " << *stringPTR << std::endl;
    std::cout << "stringREF string: " << stringREF << std::endl;
}