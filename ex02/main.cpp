/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:06:59 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 14:10:01 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int	main( void )
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	//mstack.show_first();

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] mstack.push(0);
/*

	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
*/

	return 0;
}
