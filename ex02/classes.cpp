/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:49:56 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 18:27:30 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

Base::~Base() {}

Base * generate(void)
{
	int	classNum = rand() % 3;

	std::cout << "Class number is " << classNum << std::endl;

	switch (classNum)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}
}

void identify(Base* p)
{
	if (!p)
		std::cout << "Invalid pointer (NULL)" << std::endl;
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Pointer is an instance of class A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Pointer is an instance of class B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Pointer is an instance of class C" << std::endl;
	else
		std::cout << "Uknown type!" << std::endl;
}

//catch (const std::bad_cast& e) but its in a library that is not allowed
void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);	// Try casting to A
		std::cout << "Reference is an instance of class A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Reference is an instance of class B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Reference is an instance of class C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		throw std::invalid_argument("No class matches the Base reference.");
	}
}
