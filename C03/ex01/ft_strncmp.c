/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:31:28 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/11 13:11:47 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && j < n)
	{
		i++;
		j++;
	}
	if (n == j)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_strncmp("Hello", "hello", 4));
}*/
