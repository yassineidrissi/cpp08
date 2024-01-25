/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:27:06 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/25 01:54:12 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>

MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor" << std::endl;
}

MutantStack<cT>::~MutantStack()
{
	std::cout << "MutantStack destructor" << std::endl;
}

void MutantStack<T>::push(const T& value)
{
	stack.push_back(value);
	std::cout << "pushed " << value << std::endl;
}

void MutantStack<T>::pop(void)
{
	std::vector<T>::iterator i = stack.begin();
	++i;
	this->stack = i;
}