/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:47:06 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 14:49:15 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_TPP
#define MUTANT_STACK_TPP

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	if ( VERBOSE )
		std::cout << "Constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &src ) : std::stack<T>()
{
	if ( VERBOSE )
		std::cout << "Copy called" << std::endl;
	*this = src;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=( const MutantStack<T> &src )
{
	if ( VERBOSE )
		std::cout << "Assign called" << std::endl;
	*this = src;
	return *this ;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	if ( VERBOSE )
		std::cout << "Destructor called" << std::endl;
}

#endif
