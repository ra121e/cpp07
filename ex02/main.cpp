/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 22:51:02 by athonda           #+#    #+#             */
/*   Updated: 2025/06/21 23:55:35 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int	main(void)
{
	Array<int> a(5);

	a[0] = 42;
	a[1] = 24;
	a[2] = 57;
	a[3] = 111;
	a[4] = 42242345;

	std::cout << "a[0]: " << a[0] << std::endl;
	std::cout << "size: " << a.size() << std::endl;

	return (0);
}