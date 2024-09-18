/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:46:46 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 13:21:11 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.hpp"

int main(void)
{
	Base	*Base_ptr;

	Base_ptr = generate();
	identify(Base_ptr);
	identify(*Base_ptr);
	delete Base_ptr;
	return (0);
}