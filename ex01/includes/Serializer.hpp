/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:07:15 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 12:31:13 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include "Data.hpp"

class Serializer
{
    public:
    Serializer();
    Serializer(const Serializer &src);
    Serializer  &operator=(const Serializer &rhs);
    ~Serializer();
    static  uintptr_t   serialize(Data *ptr);
    static  Data        *deserialize(uintptr_t raw);
    virtual void        abstract() = 0;
};

#endif 