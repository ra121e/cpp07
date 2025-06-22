/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 22:13:56 by athonda           #+#    #+#             */
/*   Updated: 2025/06/22 11:08:34 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	iter(T *array, int length, void(*f)(T const &s))
{
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < length; ++i)
	{
		f(array[i]);
	}
}

template<typename T>
void	display(T const &s)
{
	std::cout << s <<std::endl;
}

// only for arithmatic T
template <typename T>
void	add(T const &s)
{
	std::cout << s + 5 << std::endl;
}
