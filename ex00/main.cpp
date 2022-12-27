/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:48:28 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/27 15:34:12 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
//#include <map>
#include "easyfind.hpp" 

int	main( void )
{
	int my_ints[] = {-1, 0, -8, 9, 2};
	std::vector<int> my_vector ( my_ints, my_ints + 4 );
	my_vector.push_back(2 );
	my_vector.push_back(33);
	my_vector.push_back(99);

	std::cout << "First value [-1]: " << *(my_vector.begin()) << std::endl;
	std::cout << "First value [-1]: " << my_vector.front() << std::endl;
	std::cout << "Second value [0]: " << my_vector[1] << std::endl;
	std::cout << "Last value [99]: " << my_vector.back() << std::endl;
	std::cout << "my_vector.end() value: " << *(my_vector.end()) << std::endl;

	std::cout << "Value 9 present? Found :" << easyfind( my_vector, 9 ) << std::endl;
	std::cout << "Value -1 present? Found::" << easyfind( my_vector, -1 ) << std::endl;
	try
	{
		std::cout << "Value 99 :" << easyfind( my_vector, 9999 ) << std::endl;
	}
	catch ( std::exception )
	{
		
		std::cout << "Exception caught. Value 9999 not found!" << std::endl;
	}
	return 0;
}
