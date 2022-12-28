/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:25:23 by nlouro            #+#    #+#             */
/*   Updated: 2022/12/28 09:15:33 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		unsigned int		_count;
		unsigned int		_max_size;
		std::vector<int>	_vector;
	public:
		Span ( unsigned int max_size);
		Span ( const Span &src);
		~Span();
		void			addNumber( int number );
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			showAll();
};


#endif
