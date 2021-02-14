/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:07:25 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/14 20:48:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
	{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout 	<< "###########################################" << std::endl
				<< "############# Test Swap ###################" <<  std::endl << std::endl;
	{	
		int a = 42;	int b = -42;
		std::cout << "#### Test Int : " << std::endl;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "a:" << a << " b:" << b << std::endl;
	}
	{	
		double a = 42.42; double b = -42.05;
		std::cout << "#### Test Double: " << std::endl;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "a:" << a << " b:" << b << std::endl;
	}
	{	
		std::string a = "Astring------"; std::string b = "Bstring[][][]";
		std::cout << "#### Test String: " << std::endl;
		std::cout << "a:" << a << " b:" << b << std::endl;
		swap(a, b);
		std::cout << "a:" << a << " b:" << b << std::endl;
	}
	std::cout<< std::endl	<< "###########################################" << std::endl
							<< "############# Test Min ###################" <<  std::endl << std::endl;
	{	
		int a = 42;	int b = -42; int c = 42;
		std::cout << "#### Test int : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | min:" << min(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | min:" << &min(a,c) << std::endl;
	}
	{	
		double a = 42.42; double b = -42.05; double c = 42.42;
		std::cout << "#### Test double : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | min:" << min(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | min:" << &min(a,c) << std::endl;
	}
	{	
		std::string a = "Astring------"; std::string b = "Bstring[][][]"; std::string c = "Astring------";
		std::cout << "#### Test string : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | min:" << min(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | min:" << &min(a,c) << std::endl;
	}
	std::cout<< std::endl	<< "###########################################" << std::endl
							<< "############# Test Max ###################" <<  std::endl << std::endl;
	{	
		int a = 42;	int b = -42; int c = 42;
		std::cout << "#### Test int : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | max:" << max(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | max:" << &max(a,c) << std::endl;
	}
	{	
		double a = 42.42; double b = -42.05; double c = 42.42;
		std::cout << "#### Test double : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | max:" << max(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | max:" << &max(a,c) << std::endl;
	}
	{	
		std::string a = "Astring------"; std::string b = "Bstring[][][]"; std::string c = "Astring------";
		std::cout << "#### Test string : " << std::endl;
		std::cout << "a:" << a << " | b:" << b << " | max:" << max(a,b) << std::endl;
		std::cout << "a:" << a << " | c:" << c << " | "
				<< "&a:" << &a << " | &c:" << &c << " | max:" << &max(a,c) << std::endl;
	}
	return 0;
}