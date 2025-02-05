/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:42:30 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/05 20:19:22 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {
	*this = src;
}
ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src) {
	if (this != &src) {}
	return (*this);
}
ScalarConverter::~ScalarConverter() {}

//---------Helper functions------------

bool	isCharLiteral(const std::string& input)
{
	return (input.length() == 3 && input[0] == '\'' && input[2] == '\'');
}

bool	isSpecialCase(const std::string& input)
{
	return (input == "nan" || input == "nanf" ||
			input == "inf" || input == "inff" ||
			input == "+inf" || input == "+inff" ||
			input == "-inf" || input == "-inff");
}

void	printSpecialCase(const std::string& input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	//to print special cases in the notation of floats
	std::cout << "float: " << input << (input == "nan" || input == "inf" || input == "+inf" || input == "-inf" ? "f" : "") << std::endl;
	//to print special cases in the notation of doubles
	if (input == "nanf" || input == "inff" || input == "+inff" || input == "-inff")
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
	else
		std::cout << "double: " << input << std::endl;
}

void printConversions(double value)
{
	//to print the char conversion
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

	//to print the int conversion
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	//to print the float conversion
	std::cout << "float: " << std::fixed << std::setprecision(DECIMAL_PRECISION) << static_cast<float>(value) << "f" << std::endl;

	//to print the double conversion
	std::cout << "double: " << std::fixed << std::setprecision(DECIMAL_PRECISION) << value << std::endl;
}

//------------Main action--------------
void	ScalarConverter::convert(std::string input)
{
// Handle special cases
	if (isSpecialCase(input)) {
		printSpecialCase(input);
		return;
	}

	// Handle char literals
	if (isCharLiteral(input)) {
		char c = input[1];
		printConversions(static_cast<double>(c));
		return;
	}

	char* endPtr;
	double value = std::strtod(input.c_str(), &endPtr);

	// Check if the entire input was consumed
	if (*endPtr != '\0' && !(*endPtr == 'f' && *(endPtr + 1) == '\0')) {
		std::cout << RED << "Invalid input" << RESET << std::endl;
		return;
	}

	//to print the conversions
	printConversions(value);
}
