/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:09:21 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 10:42:31 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
	std::cout << "----TEST---- '0'" << std::endl;
	ScalarConverter::convert("0");
	std::cout << "----TEST---- 'nan'" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << "----TEST---- '42.0f'" << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << "----TEST---- 'a'" << std::endl;
	ScalarConverter::convert("a");
	std::cout << "----TEST---- '1'" << std::endl;
	ScalarConverter::convert("1");
	std::cout << "----TEST---- 'inf'" << std::endl;
	ScalarConverter::convert("inf");
	std::cout << "----TEST---- '-inff'" << std::endl;
	ScalarConverter::convert("-inff");
	return (0);
}