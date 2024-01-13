/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:57:25 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/13 18:17:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <vector>

template <typename T>

typename T::iterator easyfind(T& container, int index)
{
    return std::find(container.begin(), container.end(), index);
}
// int easyfind(const T container, int index)
// {
// 	for(typename T::iterator i = container.begin(); i != container.end(); i++)
// 	{
// 		if(*i == index)
// 			return (index);
// 	}
// 	throw "Not Found";
// }