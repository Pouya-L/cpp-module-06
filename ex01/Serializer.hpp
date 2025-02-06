/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:28:14 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 16:41:49 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	DataString;
	int			DataInt;
	double		DataDouble;
};

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer& src);
	Serializer& operator=(const Serializer& src);
	~Serializer();
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
