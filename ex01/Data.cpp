/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:34:42 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 15:26:55 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _DataString("A random string of data"), _DataInt(42) {}

Data::Data(std::string DataString, int DataInt): _DataString(DataString), _DataInt(DataInt) {}

Data::Data(const Data& src)
{
	*this = src;
}

Data&			Data::operator=(const Data& src)
{
	if (this != &src) {
		_DataString = src._DataString;
		_DataInt = src._DataInt;
	}
	return (*this);
}

Data::~Data() {}

std::string		Data::getDataString() const
{
	return (_DataString);
}

int				Data::getDataInt() const
{
	return (_DataInt);
}

std::ostream&	operator<<(std::ostream& os, const Data& data)
{
	os << "data string is "<< data.getDataString() << ", data int is " << data.getDataInt();
	return os;
}
