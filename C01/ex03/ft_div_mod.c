/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:14:59 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/08 11:31:46 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 4;
	d = 2;
	ft_div_mod(c, d, &div, &mod);
	printf("resultat : %d\n", div);
	printf("resultat : %d\n", mod);
	return (0);
}*/
