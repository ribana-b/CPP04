/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:18:00 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/22 01:53:37 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	type("Default")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &that) :
	type(that.getType())
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &that)
{
	if (this != &that)
	{
		type = that.getType();
	}
	std::cout << "WrongAnimal Copy assigment operator called" << std::endl;
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::setType(const std::string &newType)
{
	type = newType;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Default sound" << std::endl;
}
