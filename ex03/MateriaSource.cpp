/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:23:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/24 01:16:28 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		slots[i] = NULL;
	}
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& that)
{
	for (int i = 0; i < 4; ++i)
	{
		delete slots[i];
		slots[i] = that.getSlots()[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& that)
{
	if (this != &that)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete slots[i];
			slots[i] = that.getSlots()[i]->clone();
		}
		type = std::string(type);
	}
	return (*this);
}

AMateria* const	*MateriaSource::getSlots(void) const
{
	return (slots);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete slots[i];
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (slots[i] == NULL)
		{
			delete slots[i];
			slots[i] = m->clone();
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (slots[i] && slots[i]->getType() == type)
		{
			return (slots[i]);
		}
	}
	return (0);
}
