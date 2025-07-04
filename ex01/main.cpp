/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 21:10:45 by athonda           #+#    #+#             */
/*   Updated: 2025/06/25 09:33:01 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

void	Banner(std::string title)
{
	std::cout << "\n--- " << title << " ---" << std::endl;
}

int	main(void)
{
	{
	Banner("case: std::string with display func()");
	std::string str[] = {"I", "am", "a", "42Singapore", "student"};
	int	length = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < length; ++i)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "after applying elements on the function: " << std::endl;

	iter(str, length, display<std::string>);
	}
	{
	Banner("case: int with display func()");
	int str[] = {42, 24, 57, 111, 0};
	int	length = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < length; ++i)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "after applying elements on the function: " << std::endl;

	iter(str, length, display<int>);
	}
	{
	// test for compile error T is std::string
//	Banner("case: std::string with add()");
//	std::string str[] = {"I", "am", "a", "42Singapore", "student"};
//	int	length = sizeof(str) / sizeof(str[0]);
//	iter(str, length, add);
	}
	{
	// test for compile error T is char
//	Banner("case: char with add()");
//	char str[] = {'A', 'B', 'C'};
//	int	length = sizeof(str) / sizeof(str[0]);
//	iter(str, length, add);
	}
	{
	Banner("case: int with add()");
	int str[] = {42, 24, 57, 111, 0};
	int	length = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < length; ++i)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "after applying elements on the function: " << std::endl;
	iter(str, length, add<int>);
	}
	{
	Banner("case: double with add()");
	double str[] = {42.0, 24.3, 10e+57, -2e+3, 0};
	int	length = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < length; ++i)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "after applying elements on the function: " << std::endl;
	iter(str, length, add<double>);
	}
	Banner("case: Eval");
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<const int> );
	iter( tab2, 5, print<Awesome> );
	return (0);
}