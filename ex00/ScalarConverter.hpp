/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:23:13 by plashkar          #+#    #+#             */
/*   Updated: 2025/03/05 20:08:57 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <sstream>
#include <cctype>

// Text color codes
# define RESET		"\033[0m"	// Reset color
# define RED		"\033[31m"	// Red
# define GREEN		"\033[32m"	// Green
# define YELLOW		"\033[33m"	// Yellow
# define BLUE		"\033[34m"	// Blue
# define MAGENTA	"\033[35m"	// Magenta
# define CYAN		"\033[36m"	// Cyan
# define WHITE		"\033[37m"	// White

# define DECIMAL_PRECISION 1

/**
 * The ScalarConverter class only has a private constructor and a static convert method.
 * This design ensures that the class cannot be instantiated and
 * that the convert method can be called directly on the class itself.
 */
class ScalarConverter {
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter& operator=(const ScalarConverter& src);
	virtual ~ScalarConverter();
public:
	static void convert(std::string input);
};

#endif
