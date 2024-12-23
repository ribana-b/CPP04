/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 01:26:06 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 19:19:58 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() :
	name("Default")
{
	for (int i = 0; i < 4; ++i)
	{
		slots[i] = NULL;
	}
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(const std::string &name) :
	name(name)
{
	std::cout << "Character String constructor called" << std::endl;
}

Character::Character(const Character &that) :
	name(that.getName())
{
	for (int i = 0; i < 4; ++i)
	{
		if (slots[i])
		{
			delete slots[i];
		}
		slots[i] = that.getSlots()[i]->clone();
	}
	std::cout << "Character Copy constructor called" << std::endl;
}

Character	&Character::operator=(const Character &that)
{
	if (this != &that)
	{
		name = that.getName();
	}
	std::cout << "Character Copy assigment operator called" << std::endl;
	return (*this);
}

const std::string	&Character::getName(void) const
{
	return (name);
}

AMateria	* const *Character::getSlots(void) const
{
	return (slots);
}

void	Character::setName(const std::string &newName)
{
	name = newName;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (slots[i])
		{
			delete slots[i];
		}
	}
	std::cout << "Character Destructor called" << std::endl;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (slots[i])
		{
			slots[i] = m->clone();
			std::cout << "Character equipped " << m->getType() << " materia" << std::endl;
		}
	}
}

void	Character::unequip(int index)
{
	if ((index < 0 || index >= 4) && slots[index])
	{
		std::cerr << "Can't unequip that materia!" << std::endl;
		return;
	}
	std::cout << "Character unequipped " << slots[index]->getType() << " materia" << std::endl;
	delete slots[index];
	slots[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	for (int i = 0; i < 4; ++i)
	{
		if (i == index)
		{
			slots[i]->use(target);
			break;
		}			
	}
}
