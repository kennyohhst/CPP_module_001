/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:55:13 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:22:03 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
	type = value;
}

Weapon::~Weapon()
{
	std::cout << type << " is being destroyed" << std::endl;
}

const std::string	Weapon::getType()
{
	return (type);	
}

void	Weapon::setType(std::string str)
{
	type = str;
}
