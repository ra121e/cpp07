/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:22:04 by athonda           #+#    #+#             */
/*   Updated: 2025/06/21 23:54:43 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		Array	&operator=(Array const &other);
		~Array();

		T	&operator[](unsigned int index);
		T const	&operator[](unsigned int index) const;
		unsigned int size() const;
	private:
		T				*_data;
		unsigned int	_size;
};

#include "Array.tpp"
#endif
