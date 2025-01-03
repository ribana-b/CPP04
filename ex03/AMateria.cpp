/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:36:55 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/24 01:09:46 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() :
	type("None")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}


AMateria::AMateria(const AMateria& that) :
	type(that.getType())
{
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) :
	type(type)
{
	std::cout << "AMateria String constructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria& that)
{
	if (this != &that)
	{
		type = that.getType();
	}
	std::cout << "AMateria Copy operator called" << std::endl;
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* does something at " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}
