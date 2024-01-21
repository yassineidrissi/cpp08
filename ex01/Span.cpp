/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/21 20:50:48 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "constructor" << std::endl;
}

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

Span::Span(double n)
{
	this->N = n;
	std::cout << "constructor with parametre n" << std::endl;
}

Span::Span(const Span& other)
{
	(void) other;
	// if(other == this)
	// 	reutrn ;
	// this->N = other.N;
	// this->container = new container(this->N);
	std::cout << "copy constructor" << std::endl;
	
}

void Span::addNumber(int n)
{
	(void)n;
	this->container.push_back(n);
}