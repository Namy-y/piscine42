/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:39:04 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/08 11:06:16 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 17;
	y = 42;
	printf("avant : %d\n", x);
	printf("avant : %d\n", y);
	ft_swap(&x, &y);
	printf("apres : %d\n", x);
	printf("apres : %d\n", y);
	return (0);
}*/	
