/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:18:40 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/24 01:08:04 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "ICharacter.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class ICharacter;

class AMateria
{
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &that);
		AMateria(const std::string &type);

		const std::string	&getType(void) const;

		AMateria	&operator=(const AMateria& that);

		virtual AMateria	*clone() = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string type;
};

#endif // AMATERIA_HPP
