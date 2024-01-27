/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:27:06 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/27 20:12:07 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>

MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor" << std::endl;
}

template <typename T>

MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor" << std::endl;
}

template <typename T>

MutantStack<T>::MutantStack(const MutantStack& other)
{
	std::stack<T> (*this) = other;
	std::cout << "copy constructor" << std::endl;
	return *this;
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<beginT>::(void)
{
	return std::stack<T>::c.begin();
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	
	return std::stack<T>::c.end();
}

template <typename T>

MutantStack<T>& MutantStack<T>::operator==(const MutantStack& other)
{
	std::stack<T>::operator==(other);
	return (*this);
}