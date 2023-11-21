/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:12 by code              #+#    #+#             */
/*   Updated: 2023/11/20 15:56:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Debug ERROR\nSo while trying to fix it, you broke the 'fixing it'" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "Info ERROR\nNeed info? Just read the man" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "Warning\nDo not the cat" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error\nYou broke it, your fault, not mine" << std::endl;
}


void Harl::complain(std::string level)
{
	void (Harl::*funcptr[4])() = {&Harl::debug, &Harl::warning, &Harl::info, &Harl::error};
	std::string	arr[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};
	size_t i;
	i = 0;

	while (i < 4 && level != arr[i])
		i++;
	
	switch (i)
	{
		case 4:
			return ;
	}
	(Harl().*funcptr[i])();
}
