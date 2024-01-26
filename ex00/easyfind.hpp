/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:57:25 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/26 18:54:24 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <vector>
#include <iostream>
template <typename T>

typename T::iterator easyfind(T& container, int index)
{
    typename T::iterator it = std::find(container.begin(), container.end(), index);
    if (it != container.end()) {
        return it;
    } else {
        throw "Not Found";
    }
}
