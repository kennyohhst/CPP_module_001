/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:58 by code              #+#    #+#             */
/*   Updated: 2023/11/20 15:56:39 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{	
	Harl test;
	test.complain("DEBUG");
	test.complain("ERROR");
	test.complain("WARNING");
	test.complain("INFO");
	test.complain("asd");
	return (0);
}
