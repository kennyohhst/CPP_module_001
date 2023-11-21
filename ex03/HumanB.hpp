/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:28:46 by code              #+#    #+#             */
/*   Updated: 2023/11/21 07:19:34 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string person, Weapon& Weapon);
		HumanB(std::string person);
		~HumanB();
		void setWeapon(Weapon &Weapon);
		void	attack();
};

#endif
