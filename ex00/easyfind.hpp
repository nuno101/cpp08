/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:50:25 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/27 15:36:05 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
int	easyfind(const T &hay, const int needle)
{
	//std::vector<int>::iterator it;
	typename T::const_iterator it;

	it = find( hay.begin(), hay.end(), needle );
	if ( it != hay.end() )
		return needle;
	throw std::exception();
}

#endif
