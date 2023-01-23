/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:09:05 by ofadhel           #+#    #+#             */
/*   Updated: 2022/12/07 15:04:18 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(x)		x % 2 == 0
# define TRUE			1
# define FALSE			0
# define SUCCESS		0
# define EVEN_MSG		"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"

typedef int	t_bool;

#endif
