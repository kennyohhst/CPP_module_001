/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 07:11:08 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:13:37 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string value)
{
	name = value;
}

Zombie::~Zombie()
{
	std::cout << name << " is being destroyed" << std::endl;
}

void	Zombie::getName()
{
	std::cout << name << std::endl;	
}

void	Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;				
}
