/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:33:04 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 16:16:21 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl; 
}

Brain::Brain(const Brain &that)
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = std::string(that.ideas[i]);
	}
}

Brain	&Brain::operator=(const Brain &that)
{
	if (this != &that)
	{
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = std::string(that.ideas[i]);
		}
	}
	std::cout << "Brain Copy assigment operator called" << std::endl;
	return (*this);
}

const std::string	*Brain::getIdeas(void) const
{
	return (ideas);
}

void	Brain::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; ++i)
	{
		if (ideas[i].length() == 0)
		{
			ideas[i] = std::string(idea);
		}
	}
}

void	Brain::setIdea(const std::string &idea, int index)
{
	if (index < 0 || index >= 100)
		return;
	ideas[index] = std::string(idea);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
