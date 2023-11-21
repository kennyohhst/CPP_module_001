/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:58 by code              #+#    #+#             */
/*   Updated: 2023/11/15 14:25:06 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{	
	if (argc != 4)
		return  (0);
	std::string find_me = argv[2];
	std::string put_me_in = argv[3];
	std::ifstream f_name(argv[1]);
	if (!f_name)
	{
		f_name.close();
		return (0);
	}
	std::string each_line;
	std::ofstream new_file("sed_is_for_kenny");
	size_t position;
	
	while (std::getline(f_name, each_line))
	{
		position = each_line.find(find_me);
		if (position != std::string::npos)
		{
			each_line.erase(position, find_me.length());
			each_line.insert(position, put_me_in);
			new_file << each_line << std::endl;
		}
		else
			new_file << each_line << std::endl;		
	}
	new_file.close();
	f_name.close();
	return 0;
}
