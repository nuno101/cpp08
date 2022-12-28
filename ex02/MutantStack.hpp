/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:08:15 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 15:00:13 by nlouro           ###   ########.fr       */
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
		MutantStack<T>();
		MutantStack<T>( const MutantStack<T> &src );
		MutantStack<T> &operator=( const MutantStack<T> &src );
		~MutantStack<T>();
};

#include "MutantStack.tpp"

#endif
