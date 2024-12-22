/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:52:17 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/22 01:53:27 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &that) :
	Animal(that)
{
	type = that.getType();
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &that)
{
	if (this != &that)
	{
		type = that.getType();
		delete brain;
		brain = that.getBrain();
	}
	std::cout << "Dog Copy assigment operator called" << std::endl;
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (brain);
}

void	Dog::setBrain(Brain *newBrain)
{
	delete brain;
	brain = newBrain;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wooof wooof" << std::endl;
}
