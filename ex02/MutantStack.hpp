/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:08:15 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 14:08:39 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack<T>() : std::stack<T>() {} ;
		MutantStack<T>( const MutantStack<T> &src ) : std::stack<T>() { *this = src; };
		//FIXME MutantStack<T> &operator=( const MutantStack<T> &src ) : ;
		virtual	~MutantStack<T>() {} ;
};

#endif
