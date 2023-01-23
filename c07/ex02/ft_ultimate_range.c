/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:39:38 by ofadhel           #+#    #+#             */
/*   Updated: 2022/12/05 22:40:27 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, 5, 50));
	while (i < 45)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
