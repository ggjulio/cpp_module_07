/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:53:32 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/14 23:18:38 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template<typename T>
void	iter(T array[], size_t size, void (*func)(T &)){
	for (size_t i = 0; i < size; i++)
		func(array[i]);	
}

#endif
