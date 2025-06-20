/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 21:10:45 by athonda           #+#    #+#             */
/*   Updated: 2025/06/20 22:26:15 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Iter.hpp"

int	main(void)
{
	std::string str[] = {"I", "am", "a", "42Singapore", "student"};
	int	length = sizeof(str) / sizeof(str[0]);
	iter(str, length, display);
	return (0);
}