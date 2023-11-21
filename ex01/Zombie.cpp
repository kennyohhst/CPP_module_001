/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 07:15:35 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:16:52 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
	
Zombie::Zombie(std::string value)
{
	name = value;
}

Zombie::Zombie ()
{
	name = "bob";
}

Zombie::~Zombie()
{
	std::cout << name << " is being destroyed" << std::endl;
}

void	Zombie::getName()
{
	std::cout << name << std::endl;	
}

void	Zombie::announce( void )
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;				
}
