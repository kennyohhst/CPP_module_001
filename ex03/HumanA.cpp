/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:57:33 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:21:02 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string person, Weapon &value) : _weapon(&value)
{
	_name = person;
	
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
	if (_weapon->getType() == "low IQ")
		std::cout << _name << " died because he is not as smart as you are, dear evaluator ='D. love you <3" << std::endl;
	else
		std::cout << _name << " is being destroyed" << std::endl;
}

