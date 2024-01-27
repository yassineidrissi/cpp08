/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:47:17 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/28 00:37:07 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


// template <typename T>

int main()
{	
    std::vector<int> myCont;// = {1, 2, 3, 4, 5};
	// myCont.push_back(1);
	// myCont.push_back(2);
	// myCont.push_back(3);
	// myCont.push_back(4);
	// myCont.push_back(5);
	// myCont.push_back(6);
    for (int i = 0; i < 159; i++)
        myCont.push_back(i*17);
    int valueToFind = 1700;
    try
    {
        std::vector<int>::iterator it = easyfind(myCont, valueToFind);
        std::cout << "Found " << valueToFind << "\n";
    }
    catch(const char *msg)
    {
        std::cout << "Did not find " << valueToFind << "\n";
    }
    return 0;
}