/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:51:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/18 23:13:52 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :
	type("Default")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &that) :
	type(that.getType())
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &that)
{
	if (this != &that)
	{
		type = that.getType();
	}
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (type);
}

void	Animal::setType(const std::string &newType)
{
	type = newType;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Default sound" << std::endl;
}
