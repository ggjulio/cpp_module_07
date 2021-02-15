/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 00:02:20 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/15 09:29:26 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>
#include <stdexcept>
#include <ostream>

template<class T>
class Array
{
private:
	T *_array;
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
		_array = new T[other._n];
		_n = other._n;
		for (size_t i = 0; i < other._n; i++)
			_array[i] = other._array[i];
		return *this;
	}
	~Array()
	{
		delete[] _array;
	}
	
	T & operator[](size_t pos)
	{
		if (pos > _n - 1)
			throw std::out_of_range("Out of bound index...........");
		return _array[pos];
	}

	size_t size() const{
		return _n;
	}
	
};

template<typename T>
std::ostream & operator<<(std::ostream & os,  Array<T> &a){
	os << "{";
	for (size_t i = 0; i < a.size(); i++)
	{
		if (i)
			os << ", ";
		os << a[i];
	}
	os << "}";
	return os ;
}

#endif
