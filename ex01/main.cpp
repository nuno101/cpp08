/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:48:28 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/29 09:16:28 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp" 

int	main( void )
{
	std::cout << "Span tests:" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	if ( VERBOSE )
		sp.show_all();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Copy operator test
	Span sp2( sp );
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	// Add many numbers to span
	int count = 10000;
	std::cout << "Test with " << count << " elements:"<< std::endl;
	Span sp3 = Span( count );
	sp3.fill_identity( count );
	sp3.show_all();
	std::cout << "Shortest distance should be 1: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest distance should be " << count - 1 << ": " << sp3.longestSpan() << std::endl;

	// Assign operator test
	sp3 = sp2;
	sp3.show_all();

	// Default constructor
	//Span sp4 = Span();
	//sp4.show_all();

	return 0;
}
