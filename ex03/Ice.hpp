/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:30:13 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 18:39:59 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "AMateria.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &that);
		Ice(const std::string &type);

		Ice	&operator=(const Ice &);

		AMateria	*clone();
		void		use(ICharacter &target);
};

#endif // ICE_HPP
