/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/24 01:38:24 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Span::Span()
// {
// 	this->Max = 3;
// 	std::cout << "constructor" << std::endl;
// }

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

Span::Span(unsigned int n)
{
	this->Max = n;
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
	unsigned int size = container.size();
	std::cout << size << std::endl;
	if(size >= this->Max)
		throw "Max Size";
	else
		this->container.push_back(n);
}

void Span::print() {
     for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int Span::shortestSpan(void)
{
	int  shortestSpan = 0;
	for(std::vector<int>::iterator i = container.begin(); i != container.end(); ++i)
	{
		for(std::vector<int>::iterator j = container.begin();j != container.end(); ++j)
		{
			if(shortestSpan > std::abs(j - i))
				shortestSpan = std::abs(j - i);
		}
		
	}
	return shortestSpan;
}

int Span::longestSpan(void)
{
	int longestSpan = 0;
	for(std::vector<int>::iterator i = container.begin(); i != container.end(); ++i)
	{
		for(std::vector<int>::iterator j = container.begin();j != container.end(); ++j)
		{
			if(longestSpan < std::abs(j - i))
				longestSpan = std::abs(j - i);
		}
		
	}
	return longestSpan;
}