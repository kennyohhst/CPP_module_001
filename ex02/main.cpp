/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:58 by code              #+#    #+#             */
/*   Updated: 2023/11/10 16:55:57 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p;
	std::string& r = str;
	p = &str;

	std::cout << &str << std::endl;
	std::cout << p << std::endl;
	std::cout << &r << std::endl;

	std::cout << str << std::endl;
	std::cout << *p << std::endl;
	std::cout << r << std::endl;
	
}