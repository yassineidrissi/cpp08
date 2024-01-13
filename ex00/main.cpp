/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:47:17 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/13 18:20:28 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int index);

int main()
{	
    std::vector<int> myContainer = {1, 2, 3, 4, 5};

    int valueToFind = 3;
    auto it = easyfind(myContainer, valueToFind);

    if (it != myContainer.end())
    {
        std::cout << "Found " << valueToFind << " at position " << std::distance(myContainer.begin(), it) << "\n";
    }
    else
    {
        std::cout << "Did not find " << valueToFind << "\n";
    }

    return 0;
}