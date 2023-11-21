/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:08:35 by code              #+#    #+#             */
/*   Updated: 2023/11/20 16:08:56 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie bob("bob");
	Zombie *steven = newZombie("steven");
	
	steven->announce();
	steven->getName();
	bob.getName();
	bob.announce();
	
	delete steven;
	return (0);
}
