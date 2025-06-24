/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 22:51:02 by athonda           #+#    #+#             */
/*   Updated: 2025/06/24 20:48:58 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//int	main(void)
//{
	//Array<int> a(5);

	//a[0] = 42;
////	a[1] = 24;
////	a[2] = 57;
////	a[3] = 111;
////	a[4] = 42242345;

	//std::cout << "a[0]: " << a[0] << std::endl;
	//std::cout << "size: " << a.size() << std::endl;

	//return (0);
//}
#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <Array.hpp>

#define MAX_VAL 750

void	Banner(std::string title)
{
	std::cout << "\n--- " << title << " ---" << std::endl;
}

int main(int, char**)
{
	{
	Banner("simple test");
	Array<int> a(5);

	a[0] = 42;
	a[1] = 24;
	a[2] = 57;
	a[3] = 111;
	a[4] = 42242345;

	int	length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "size: " << a.size() << std::endl;
	}

	Banner("mandatory test");
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		std::cout << numbers[i] << " ";
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}