/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:38:07 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 16:26:44 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const & src) {
	*this = src;
}
Serializer & Serializer::operator=(Serializer const & src) {
	if (this != &src) {}
	return (*this);
}

Serializer::~Serializer() {}

/**
 * reinterpret_cast is a powerful but dangerous tool in C++ because it allows you to tell the compiler,
 * “Trust me, I know what I’m doing,” even when converting between unrelated types.
 * It should be used carefully, but there are real-world scenarios where it's necessary.
 */
uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

