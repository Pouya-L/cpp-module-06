/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:13:23 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/05 20:28:07 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
Test cases
	(void)argc;
	(void)argv;
	ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("4.2f");
	std::cout << std::endl;
	ScalarConverter::convert("'a'");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("182.55.77");
	std::cout << std::endl;
*/

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	else
	{
		std::cout << RED << "Invalid number of arguments" << RESET << std::endl;
		std::cout << GREEN << "usage: ./convert <input_str>" << RESET << std::endl;
	}
}
