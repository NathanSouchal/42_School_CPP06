/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:05:42 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 13:32:36 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src)
{
    *this = src;
}

Serializer  &Serializer::operator=(const Serializer &rhs)
{
    (void)rhs;
    return (*this);
}

Serializer::~Serializer() {}

uintptr_t   Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}