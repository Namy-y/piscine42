/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:34:18 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/08 12:44:01 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = 4;
	d = 2;
	printf("avant: %d\n", c);
	printf("avant: %d\n", d);
	ft_ultimate_div_mod(&c, &d);
	printf("apres: %d\n", c);
	printf("apres: %d\n", d);
}*/
