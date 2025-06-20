/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:52:08 by athonda           #+#    #+#             */
/*   Updated: 2025/06/20 20:22:56 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "whatever.hpp"


int	main(void)
{
	{
	int	a = 42;
	int	b = 24;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "max() of a or b: " << max(a, b) << std::endl;
	std::cout << "min() of a or b: " << min(a, b) << std::endl;

	swap(a, b);
	std::cout << "after swap: a " << a << std::endl;
	}
	{
	float	a = 42.3;
	float	b = 24.6;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "max() of a or b: " << max(a, b) << std::endl;
	std::cout << "min() of a or b: " << min(a, b) << std::endl;

	swap(a, b);
	std::cout << "after swap: a " << a << std::endl;

	}
	return (0);
}