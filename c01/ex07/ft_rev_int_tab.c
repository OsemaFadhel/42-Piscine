/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:09:53 by ofadhel           #+#    #+#             */
/*   Updated: 2022/11/22 16:14:54 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int	swap;

	i = 0;
	last = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [last];
		tab[last] = swap;
		i++;
		last--;
	}
}
