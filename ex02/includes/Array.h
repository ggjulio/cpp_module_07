/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 00:02:20 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/15 01:45:34 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>

template<class T>
class Array
{
private:
	typename T *_array;
	size_t	_n; 
public:
	Array(): _array(NULL), _n(0) {}
	Array(size_t n): _n(n){
		_array = new T[n];
	}
	Array(const Array<T> &other){
		*this = other;
	}
	
	Array & operator=(const Array<T> &other){
		if (_array)
			delete [] _array;
		_array = new T[other.n];
		_n = other._n;
		for (size_t i = 0; i < other._n; i++)
			_array[i] = other._array[i];
	}
	~Array()
	{
		delete[] _array;
	}

	
};

#endif
