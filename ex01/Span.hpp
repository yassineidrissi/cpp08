/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:38 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/21 20:50:33 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
static int n = 0;

class Span
{
	public:
	int N;
	std::vector<int> container;
	Span();
	Span(double n);
	~Span();
	Span(const Span& other);
	void addNumber(int n);
	double shortestSpan(void);
	double longestSpan(void);
		
};