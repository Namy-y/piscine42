/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:50:44 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/11 09:28:19 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return ((void *)0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[50] = "bonjour";
	char	to_find[50] = "jour";


	printf("la sous-chaine %s est a la position %ld\n", 
	to_find, ft_strstr(str, to_find) - str);
}*/
