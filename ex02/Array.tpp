/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:55:50 by athonda           #+#    #+#             */
/*   Updated: 2025/06/21 22:59:30 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() :
	_data(NULL),
	_size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) :
	_data(new T[n]()),
	_size(n)
{}

template <typename T>
Array<T>::Array(Array const &other):
	_data(NULL),
	_size(0)
{
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete[] (this->_data);

		this->_size = other.size;
		if (this->_size > 0)
		{
			this->_data = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; ++i)
			{
				this->_data[i] = other._data[i];
			}
		}
		else
			this->_data = NULL;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] (this->_data);
}