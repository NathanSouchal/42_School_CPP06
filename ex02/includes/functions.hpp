/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:52:11 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/17 15:11:37 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS
# define FUNCTIONS

# include "Base.hpp"
# include "AA.hpp"
# include "BB.hpp"
# include "CC.hpp"
# include <cstdlib>
# include <ctime>

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif