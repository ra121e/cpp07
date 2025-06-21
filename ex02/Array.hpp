/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:22:04 by athonda           #+#    #+#             */
/*   Updated: 2025/06/21 22:12:27 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		Array	&operator=(Array const &other);
		~Array();

//		T	&operator[](unsigned int index);
//		const T	&operator[](unsigned int index) const;

	private:
		T				*_data;
		unsigned int	_size;
};


#endif

#include "Array.tpp"
