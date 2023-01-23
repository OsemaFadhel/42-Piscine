/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:55:51 by ofadhel           #+#    #+#             */
/*   Updated: 2022/12/08 20:48:40 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int size)
{
	char	*ret;
	int		i;

	ret = NULL;
	ret = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = 0;
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strcpy(av[i], ret[i].size);
		i += 1;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}
