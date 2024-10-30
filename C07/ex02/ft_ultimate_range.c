/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:40:19 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/24 11:39:29 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	*tab;
	int	i;

	i = 0;
	r = max - min;
	tab = (int *)malloc(r * sizeof(int));
	*range = tab;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!r)
	{
		*range = 0;
		return (-1);
	}
	while (i < r)
	{
		tab[i] = min + i;
		i++;
	}
	return (r);
}

#include <stdio.h>

int	main(void)
{
	int	r;
	int	*range;

	r = ft_ultimate_range(&range, -10, -1);
	printf("%d ", r);
	printf("\n");
}
