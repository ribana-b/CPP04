/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 01:20:02 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 19:21:29 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Character : public ICharacter
{
	public:
		Character();
		~Character();
		Character(const Character& that);
		Character(const std::string& name);

		const std::string&	getName(void) const;
		int					getSlotIndex(void) const;
		AMateria* const*	getSlots(void) const;
		void				setName(const std::string& newName);

		Character& operator=(const Character& that);

		void	equip(AMateria *m);
		void	unequip(int index);
		void	use(int index, ICharacter& target);

	private:
		std::string	name;
		AMateria*	slots[4];
};

#endif // CHARACTER_HPP
