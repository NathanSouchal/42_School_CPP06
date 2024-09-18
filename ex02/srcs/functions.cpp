/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:57:01 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 13:21:14 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base	*generate(void)
{
	int		randomNb;
	Base	*base_ptr;
	srand(static_cast<unsigned>(time(NULL)));

	randomNb = rand() % 3;
	if (randomNb == 0)
		base_ptr = new A();
	if (randomNb == 1)
		base_ptr = new B();
	if (randomNb == 2)
		base_ptr = new C();
	return (base_ptr);
}

void	identify(Base *p)
{
	A	*A_ptr;
	B	*B_ptr;
	C	*C_ptr;

	A_ptr = dynamic_cast<A*>(p);
	B_ptr = dynamic_cast<B*>(p);
	C_ptr = dynamic_cast<C*>(p);
	if (A_ptr)
		std::cout << "A" << std::endl;
	if (B_ptr)
		std::cout << "B" << std::endl;
	if (C_ptr)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &A_ref = dynamic_cast<A&>(p);
		(void)A_ref;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception)
	{
		try
		{
			B &B_ref = dynamic_cast<B&>(p);
			(void)B_ref;
			std::cout << "B" << std::endl;
		}
		catch(const std::exception)
		{
			try
			{
				C &C_ref = dynamic_cast<C&>(p);
				(void)C_ref;
				std::cout << "C" << std::endl;
			}
			catch(const std::exception)
			{
				std::cout << "neither A B or C" << std::endl;
			}
		}
	}
}