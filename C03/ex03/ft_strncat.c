/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:08:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/05 15:48:36 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (i < nb && src[i] != '\0') 
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[] = "My name is Mario";
	char src[] = ", Super Mario";
	int n = 7; 

	printf("original strncat = %s\n", strncat(dest, src, n));
//	printf("mine strncat = %s\n", ft_strncat(dest, src, n));	
	return (0);
}*/
