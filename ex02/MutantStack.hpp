/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:08:15 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 12:14:26 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

class	MutantStack
{
	private:
	
	public:
		MutantStack();
		MutantStack( const MutantStack &src );
		MutantStack &operator=( const MutantStack &src );
		~MutantStack();
};

#endif
