/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:15:49 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 16:24:18 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data* data = new Data;
	data->DataString = "The Cake is a lie";
	data->DataInt = 42;
	data->DataDouble = 42.42;

	uintptr_t serialized = Serializer::serialize(data);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "Deserialized: " << std::endl;
	std::cout << "\tString: " << deserialized->DataString << std::endl;
	std::cout << "\tInt: " << deserialized->DataInt << std::endl;
	std::cout << "\tDouble: " << deserialized->DataDouble << std::endl;
	delete data;
	return 0;
}
