/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:48:37 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/18 23:27:10 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal()
{
	type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &that) :
	Animal()
{
	type = that.type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &that)
{
	if (this != &that)
	{
		type = that.getType();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeeeeoooowwww" << std::endl;
}
