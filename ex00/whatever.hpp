/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:09:28 by athonda           #+#    #+#             */
/*   Updated: 2025/06/20 20:20:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T	c;
	c = a;
	a = b;
	b = c;
}

template<typename T>
T max(T &a, T&b)
{
	if (a >= b)
		return (a);
	return (b);
}

template<typename T>
T	min(T &a, T &b)
{
	if (a <= b)
		return (a);
	return (b);
}
