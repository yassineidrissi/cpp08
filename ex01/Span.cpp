/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/21 19:04:45 by yaidriss         ###   ########.fr       */
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
	if(other == this)
		reutrn ;
	this->N = other.N;
	this->container = new container(N);
}

void Spain::addNumber(double n)
{
	this.container.push_back(n);
}