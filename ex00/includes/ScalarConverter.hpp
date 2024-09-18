/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:13:45 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 10:41:11 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_H
# define SCALARCONVERT_H

# include <iostream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <limits>
# include <stdexcept>
# include <cerrno>

class ScalarConverter
{
	public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter	&operator=(const ScalarConverter &rhs);
	~ScalarConverter();
	static void		convert(const std::string literal);
	virtual void	abstract() = 0;
};

#endif