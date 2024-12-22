/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:19:23 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/22 01:55:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
	WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &that) :
	WrongAnimal()
{
	type = that.getType();
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &that)
{
	if (this != &that)
	{
		type = that.getType();
	}
	std::cout << "WrongCat Copy assigment Operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "PSPSPSPPSPSPSPSPSPPSSS" << std::endl;
}
