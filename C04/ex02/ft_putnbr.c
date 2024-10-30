/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:48:02 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/15 13:28:23 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		put_char('-');
		write (1, "2147483648", 10);
	}
	else if (nb < 0)
	{
		put_char('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb >= 0 && nb < 10)
		put_char(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	put_char('\n');
	ft_putnbr(-42);
	put_char('\n');
	ft_putnbr(-2147483648);
	put_char('\n');
	ft_putnbr(2147483647);
	put_char('\n');
	ft_putnbr(17);
}*/
