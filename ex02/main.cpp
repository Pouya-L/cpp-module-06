/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:52:23 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 18:28:06 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

int	main(void)
{
	srand(time(NULL));
	Base *base = generate();

	std::cout << "Identifying the base using the pointer" << std::endl;
	identify(base);

	std::cout << "Identifying the base using the refrence" << std::endl;
	identify(*base);

	delete base;
	return (0);
}
