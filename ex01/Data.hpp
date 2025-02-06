/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:31:49 by plashkar          #+#    #+#             */
/*   Updated: 2025/02/06 15:37:32 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Data {
private:
	std::string	_DataString;
	int			_DataInt;
public:
	Data();
	Data(std::string DataString, int DataInt);
	Data(const Data& src);
	Data& operator=(const Data& src);
	~Data();

	std::string	getDataString()	const;
	int			getDataInt()	const;
};

std::ostream& operator<<(std::ostream& os, const Data& data);

#endif
