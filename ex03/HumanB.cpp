/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:44:05 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:19:20 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string person, Weapon &value) : _weapon(&value)
{
	_name = person;
	
}

HumanB::HumanB(std::string person)
{
	_name = person;
	_weapon = nullptr;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	_weapon = &Weapon;
}

void	HumanB::attack()
{
	if (_weapon != nullptr)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their " << "low IQ" << std::endl;
}

HumanB::~HumanB()
{
	if (_weapon == nullptr)
		std::cout << _name << " died because he is not as smart as you are, dear evaluator ='D. love you <3" << std::endl;
	else
		std::cout << _name << " is being destroyed" << std::endl;
}

