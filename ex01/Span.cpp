/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:28:08 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 10:34:54 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span( unsigned int max_size) : _count( 0 ), _max_size( max_size )
{
}

Span::Span( const Span &src) : _count( src._count ), _max_size( src._max_size )
{
	*this = src;
}

Span::~Span()
{
}

void	Span::addNumber( int number )
{
	if ( this->_count == this->_max_size )
		throw std::exception();
	this->_vector.push_back( number );
	this->_count++;
}

unsigned int	Span::shortestSpan()
{
	if ( this->_count <= 1)
		throw std::exception();
	std::sort( _vector.begin(), _vector.end() );
	std::vector<int>::iterator itr;
	itr = _vector.begin();
	int	distance = *(itr+1) - *itr;
	int	temp;
	for( itr = _vector.begin(); itr + 1 != _vector.end(); itr++ )
	{
		temp = ( *(itr+1) - *itr );
		if( temp < distance )
			distance = temp;
		//std::cout << "Min distance: " << distance << std::endl;
	}
	return distance;
}

unsigned int	Span::longestSpan()
{
	if ( this->_count <= 1)
		throw std::exception();
	std::sort( _vector.begin(), _vector.end() );
	return _vector.back() - _vector.front();
}

void	Span::showAll()
{
	//std::sort( _vector.begin(), _vector.end() );
	std::vector<int>::iterator itr;
	for( itr = _vector.begin(); itr != _vector.end(); itr++ )
		std::cout << *itr << std::endl;
		//std::cout << *itr << " next: " << *(itr+1) << " Distance: " << *(itr+1) - *itr << std::endl;
}
