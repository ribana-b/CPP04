/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:51:34 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/20 04:07:49 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &that);

		Brain	*getBrain(void) const;
		void	setBrain(Brain *newBrain);

		Dog	&operator=(const Dog &that);

		void	makeSound() const;

	private:
		Brain	*brain;
};

#endif // DOG_HPP
