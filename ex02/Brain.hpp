/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:29:01 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/23 16:10:11 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &that);

		const std::string	*getIdeas(void) const;
		void				setIdeas(const std::string &idea);
		void				setIdea(const std::string &idea, int index);

		Brain	&operator=(const Brain &that);

	private:
		std::string	ideas[100];
};

#endif // BRAIN_HPP
