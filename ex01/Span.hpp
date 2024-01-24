/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:38 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/23 22:24:18 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
	public:
	unsigned int Max;
	std::vector<int> container;
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span& other);
	void addNumber(int n);
	int	shortestSpan(void);
	int longestSpan(void);
	void print(void);
	
};