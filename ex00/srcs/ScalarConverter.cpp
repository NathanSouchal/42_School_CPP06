/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:59:51 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 13:31:36 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

void	charConvert(const std::string literal)
{
	long intValue;
	char *end;

	intValue = strtol(literal.c_str(), &end, 10);
	if (literal.length() == 1 && *end == literal.c_str()[0])
		std::cout << "char: '" << literal.c_str()[0] << "'" << std::endl;
	else if ((*end == '\0' || !strcmp(end, ".0") || !strcmp(end, ".0f")) && intValue >= 0 && intValue <= 127)
	{
		if (isprint(static_cast<char>(intValue)))
			std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void	intConvert(const std::string literal)
{
	long intValue;
	char *end;
	char *end2;

	intValue = strtol(literal.c_str(), &end, 10);
	strtol(end + 1, &end2, 10);
	if (literal.length() == 1 && intValue == 0 && literal.compare("0"))
		std::cout << "int: " << static_cast<int>(literal.c_str()[0]) << std::endl;
	else if ((*end == '\0' || (*end == '.' && (*end2 == '\0' || (*end2 == 'f' && *(end2 + 1) == '\0')))) && intValue >= std::numeric_limits<int>::min() \
	&& intValue <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(intValue) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	floatConvert(const std::string literal)
{
	float	floatValue;
	char	*end;
	char	*end2;
	char	*end3;
	int		precision;

	errno = 0;
	floatValue = strtof(literal.c_str(), &end);
	if (errno == ERANGE)
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	strtol(literal.c_str(), &end2, 10);
	if (*end2 != '\0')
		end2 += 1;
	std::string decimalPart(end2);
	precision = decimalPart.length();
	if (precision == 0)
		precision = 1;
	strtol(end2 + 1, &end3, 10);
	if (*end3 == 'f')
		precision -= 1;
	if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
		std::cout << "float: " << std::fixed << std::setprecision(precision) << floatValue << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}

void	doubleConvert(const std::string literal)
{
	double	doubleValue;
	char	*end;
	char	*end2;
	char	*end3;
	int		precision;

	errno = 0;
	doubleValue = strtod(literal.c_str(), &end);
	if (errno == ERANGE)
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	strtol(literal.c_str(), &end2, 10);
	if (*end2 != '\0')
		end2 += 1;
	std::string decimalPart(end2);
	precision = decimalPart.length();
	if (precision == 0)
		precision = 1;
	strtol(end2 + 1, &end3, 10);
	if (*end3 == 'f')
		precision -= 1;
	if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
		std::cout << "double: " << std::fixed << std::setprecision(precision) << doubleValue << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}


void	ScalarConverter::convert(const std::string literal)
{
	charConvert(literal);
	intConvert(literal);
	floatConvert(literal);
	doubleConvert(literal);
}