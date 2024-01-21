/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:38 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/21 19:04:11 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Span
{
	public:
	static int N = 0;
	std::vector<int> container;
	Span();
	Span(double n);
	~Span();
	Span(const Span& other);
	void addNumber(double n);
	double shortestSpan(void);
	double longestSpan(void);
		
}