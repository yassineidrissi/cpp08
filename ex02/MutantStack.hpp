/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:26:58 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/26 14:42:44 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

template <typename T>

class MutantStack : std::stack
{
	public:
		std::vector<T> stack;
		MutantStack();
		~MutantStack();
		T begin(void);
		T end(void); // need to add const
		class iterator
		{
			std::vector<T>::iterator stack;
			operator++(stack);
		}
};

#include "MutantStack.tpp"