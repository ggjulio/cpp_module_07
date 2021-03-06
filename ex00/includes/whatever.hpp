/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:59:50 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/14 21:05:02 by juligonz         ###   ########.fr       */
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
	return left < right ? left : right;	
}

template<typename T>
T &	max(T & left, T & right){
	return left > right ? left : right;
}

#endif
