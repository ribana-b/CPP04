/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:23:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 19:29:42 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& that)
{
	for (int i = 0; i < 4; ++i)
	{
		slots[i] = 
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& that);

		MateriaSource&	operator=(const MateriaSource& that);

		void learnMateria(AMateria* );
		AMateria* createMateria(std::string const& type);
