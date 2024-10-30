/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurise_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:37:07 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/18 10:35:00 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		result *= ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(2, 5));
}*/
