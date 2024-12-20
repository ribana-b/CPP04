/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:46:57 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/20 04:08:16 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &that);

		Brain	*getBrain(void) const;
		void	setBrain(Brain* newBrain);

		Cat	&operator=(const Cat &that);

		void	makeSound() const;

	private:
		Brain	*brain;
};

#endif // CAT_HPP
