/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:06:59 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/29 09:28:17 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int	main( void )
{
	if ( VERBOSE )
	{
		std::cout << "Original stack tests:" << std::endl;
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

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
    		std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		/*
		std::stack<int> s;
		s = mstack;
		MutantStack<int>::iterator sit = mstack.begin();
		MutantStack<int>::iterator site = mstack.end();
		while (sit != site) {
    		std::cout << *sit << std::endl;
			++sit;
		}
		*/
	}
	if ( VERBOSE )
	{
		std::cout << "Replace MutantStack with std::list and check the output is identical:" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl; // using back() instead of top()
		mstack.pop_back();                       // using pop_back() instead of pop()
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...] mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
    		std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}


	return 0;
}
