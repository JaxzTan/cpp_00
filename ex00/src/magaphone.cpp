/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:00:51 by chtan             #+#    #+#             */
/*   Updated: 2024/12/16 16:28:48 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/**
 * cctype header is for characters functions
 * just like a print arguments function that take arguments and check is it lowercase
 * if so than turn upper case and
 * std::cound << ?? is the print function in cpp
 */
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
				argv[i][j] = (char)toupper(argv[i][j]);
			std::cout << argv[i];
			if (argv[i] != NULL)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
