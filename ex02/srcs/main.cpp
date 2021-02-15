/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 00:20:02 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/15 09:30:12 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"
#include <iostream>

int main()
{
	std::cout << std::endl 
		<< "########################################" << std::endl
		<< "#########  Test basic int array ########" << std::endl;
	{
		Array<int> arr(3);

		std::cout << arr << std::endl;
		arr[0] = 1;
		arr[1] = 3;
		arr[2] = 5;
		std::cout << arr << std::endl;
	}
	std::cout << std::endl 
		<< "########################################" << std::endl
		<< "#########  Test Out of bound ###########" << std::endl;
	{
		Array<int> arr(2);

		arr[0] = 1;
		arr[1] = 3;
		try {
			arr[2] = 5;
		}
		catch(std::out_of_range &e){
			std::cout << e.what() << std::endl;
			
		}
		std::cout << arr << std::endl;
	}
	std::cout << std::endl 
		<< "########################################" << std::endl
		<< "#########  Test string + copy array ########" << std::endl;
	{
		Array<std::string> arr(3);
		Array<std::string> arr2;
		Array<std::string> arr3(3);

		arr[0] = "one";
		arr[1] = "two";
		arr[2] = "three";

		arr3 = arr2 = arr;
	
		std::cout << arr << std::endl;
		std::cout << arr2 << std::endl;
		std::cout << arr3 << std::endl;
		std::cout << "#### Test copy (check also valgrind)" << std::endl;

		arr3[0] = "CHANGED";

		std::cout << arr << std::endl;
		std::cout << arr2 << std::endl;
		std::cout << arr3 << std::endl;
	}
	return 0;
}