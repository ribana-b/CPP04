/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:50:23 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/20 04:59:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &that);

		const std::string	&getType(void) const;
		void				setType(const std::string &newType);

		Animal	&operator=(const Animal &that);

		virtual void	makeSound() const = 0;

	protected:
		std::string	type;
};

#endif // ANIMAL_HPP
