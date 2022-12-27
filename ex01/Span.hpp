/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:25:23 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/27 16:51:28 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
	private:
		unsigned int	_next;
		unsigned int	_size;
		int				*_numbers;
	public:
		Span ( unsigned int size );
		~Span();
		void			addNumber( int number );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};


#endif
