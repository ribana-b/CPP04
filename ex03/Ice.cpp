/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:14:22 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/24 00:42:55 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
	AMateria()
{
	type = "ice";
	std::cout << "Ice Default constructor called" << std::endl;
}


Ice::Ice(const Ice &that) :
	AMateria(that)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::Ice(const std::string &type) :
	AMateria(type)
{
	std::cout << "Ice String constructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &)
{
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria	*Ice::clone()
{
	return new Ice(*this);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
