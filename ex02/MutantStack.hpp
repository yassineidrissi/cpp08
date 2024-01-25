/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:26:58 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/25 01:53:48 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

template <typename T>

class MutantStack
{
	public:
		std::vector<T> stack;
		MutantStack();
		~MutantStack();
		void push(const T& value);
		void pop();
		T begin(void);
		T end(void); // need to add const
};

#include "MutantStack.tpp"