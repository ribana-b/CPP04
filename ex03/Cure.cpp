/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 01:13:15 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/24 00:55:45 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :
	AMateria()
{
	type = "cure";
	std::cout << "Cure Default constructor called" << std::endl;
}


Cure::Cure(const Cure &that) :
	AMateria(that)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::Cure(const std::string &type) :
	AMateria(type)
{
	std::cout << "Cure String constructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria	*Cure::clone()
{
	return new Cure(*this);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
