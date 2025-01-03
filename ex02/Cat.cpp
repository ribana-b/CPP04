/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:48:37 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/22 19:29:25 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &that) :
	Animal(that),
	brain(NULL)
{
	type = that.type;
	delete brain;
	brain = new Brain(*that.getBrain());
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &that)
{
	if (this != &that)
	{
		type = that.getType();
		delete brain;
		brain = new Brain(*that.getBrain());
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (brain);
}

void	Cat::setBrain(Brain *newBrain)
{
	delete brain;
	brain = new Brain(*newBrain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeeeeoooowwww" << std::endl;
}
