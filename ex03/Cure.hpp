/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 01:07:04 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 18:48:23 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "AMateria.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &that);
		Cure(const std::string &type);

		Cure	&operator=(const Cure &);

		AMateria	*clone();
		void		use(ICharacter &target);
};

#endif // CURE_HPP
