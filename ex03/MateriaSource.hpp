/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:37:07 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 19:28:13 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "IMateriaSource.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& that);

		MateriaSource&	operator=(const MateriaSource& that);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);

	private:
		AMateria	*slots[4];
		std::string	type;
};

#endif // MATERIASOURCE_HPP
