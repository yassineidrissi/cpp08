/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:51:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/28 00:43:22 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():Max(0)
{
}

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

Span::Span(unsigned int n)
{
	this->Max = n;
	std::cout << "constructor with parametre n" << std::endl;
}

Span::Span(const Span& other) : Max(other.Max), container(other.container)
{
	std::cout << "copy constructor" << std::endl;	
}

Span& Span::operator=(const Span& other)
{
	if(this != &other)
	{
		this->Max = other.Max;
		container = other.container;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if(container.size() >= this->Max)
		throw "Span is Full"; //         throw std::runtime_error("Span is full");
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
	if (container.size() < 3)
		throw "Need more values"; //        throw std::runtime_error("Span is full");
	int  shortestSpan = INT_MAX;
	for(std::vector<int>::iterator i = container.begin(); i != container.end(); ++i)
		for(std::vector<int>::iterator j = i + 1;j != container.end(); ++j)
			if(shortestSpan > std::abs(*j - *i))
				shortestSpan = std::abs(*j - *i);
	return shortestSpan;
}

int Span::longestSpan(void)
{
	if (container.size() < 3)
		throw "Need more values"; //         throw std::runtime_error("Span is full");
	int longestSpan = 0;
	for(std::vector<int>::iterator i = container.begin(); i != container.end(); ++i)
		for(std::vector<int>::iterator j = i + 1;j != container.end(); ++j)
			if(longestSpan < std::abs(*j - *i))
				longestSpan = std::abs(*j - *i);
	return longestSpan;
}

void Span::range(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = begin; i != end; ++i) 
	{
        container.push_back(*i);
    }
}