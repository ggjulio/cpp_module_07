/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:07:25 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/14 23:56:14 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T, size_t SIZE>
void print(const T (&to_print)[SIZE]){
	std::cout << "{";
	for (size_t i = 0; i < SIZE; i++)
	{
		if (i > 0)
			std::cout << ", ";
		std::cout << to_print[i];
	}
	std::cout << "}" << std::endl;
}

void funcInt(int &i){
	i += i-3;
}

void funcstring(std::string &s){
	s += "_NEW";
}

template<typename T>
void funcTemplate(const T &s){
	s += s;
}

int main()
{
	std::cout << std::endl << "###########################################" << std::endl
		<< "############# Test int ###################" <<  std::endl;

	{
		int arr[] = {1,2,3,4,5};

		print(arr);
		iter(arr, 5, funcInt);
		print(arr);
	}
	std::cout << std::endl << "###########################################" << std::endl
		<< "############# Test String ###################" <<  std::endl;
	{
		std::string arr[] = {"A","B","C","D","E"};

		print(arr);
		iter(arr, 5, ::funcstring);
		print<std::string>(arr);
	}
	
	std::cout << std::endl << "###########################################" << std::endl
		<< "############# Test String ###################" <<  std::endl;
	{
		std::string arr[] = {"A","B","C","D","E"};

		print(arr);
		
		iter(arr, 5, &funcTemplate<std::string &>);
		print(arr);
		iter(arr, 5, &funcTemplate<std::string &>);
		print(arr);
	}
	return 0;
}