/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:38 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/27 21:11:48 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>


class Span
{
	private:
		unsigned int Max;
		std::vector<int> container;
	
	public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);
	void addNumber(int n);
	int	shortestSpan(void);
	int longestSpan(void);
	void print(void);
	void range(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};