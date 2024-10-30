/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrippon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:35:10 by lgrippon          #+#    #+#             */
/*   Updated: 2024/07/23 10:43:29 by lgrippon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *s)
{
	int	j;

	j = 0;
	while (s[j])
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_len(src) * (sizeof(char)));
	if (!dest)
		return(0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*c;
	char	str[] = "Hello !";

	c = ft_strdup(str);
	printf("%s", c);
	free(c);
}*/
