/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:49:24 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/23 13:37:19 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	i = 0;
	range = max - min;
	tab = (int *)malloc(range * sizeof(int));
	if (!tab)
		return (NULL);
	if (min >= max)
		return ((void *)NULL);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	int	*r;
	int	i;

	r = ft_range(1, 10);
	i = 0;
	if (r == NULL)
		return (1);
	while (i < 9)
	{
		printf("%d ", r[i]);
		i++;
	}
	printf("\n");
	free(r);
}*/
