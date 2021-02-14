/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:59:50 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/14 20:36:13 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T & left, T & right)
{
	T tmp = left;
	left = right;
	right = tmp;
}

template<typename T>
T &	min(T & left, T & right){
	if (left < right)
		return left;
	return right;
}

template<typename T>
T &	max(T & left, T & right){
	if (left > right)
		return left;
	return right;
}

#endif
