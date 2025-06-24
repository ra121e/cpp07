/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:52:08 by athonda           #+#    #+#             */
/*   Updated: 2025/06/24 15:38:01 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "whatever.hpp"

void	Banner(std::string title)
{
	std::cout << "\n--- " << title << " ---" << std::endl;
}

int	main(void)
{
	{
	Banner("case: int");
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
	Banner("case: float");
	float	a = 42.3;
	float	b = 24.6;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "max() of a or b: " << max(a, b) << std::endl;
	std::cout << "min() of a or b: " << min(a, b) << std::endl;

	swap(a, b);
	std::cout << "after swap: a " << a << std::endl;

	}
	{
	Banner("case: char");
	char	a = 'A';
	char	b = 'z';

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "max() of a or b: " << max(a, b) << std::endl;
	std::cout << "min() of a or b: " << min(a, b) << std::endl;

	swap(a, b);
	std::cout << "after swap: a " << a << std::endl;
	}
	{
	Banner("Mandatory case");
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}