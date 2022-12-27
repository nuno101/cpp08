/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:28:08 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/27 16:52:09 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int size) : _next(0), _size(size)
{
		
}

Span::~Span()
{
}

//Any attempt to add a new element if there are already N elements stored should throw an exception.
void	Span::addNumber( int number )
{
	(void) number;

}
