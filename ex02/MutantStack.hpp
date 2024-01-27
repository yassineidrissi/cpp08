/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:26:58 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/27 20:00:21 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:
		// std::stack<T> stack; // idon't need to use std::stack<T> because already inhearit from stack
		
		
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator==(const MutantStack& other);
		iterator begin(void);
		iterator end(void); // need to add const
};

#include "MutantStack.tpp"