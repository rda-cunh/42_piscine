/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:54:15 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 15:51:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *src)
{
	unsigned int	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; 
	return (ft_length(src));
}

#include <stdio.h>

int	main(void) 
{
	char src[] = "Where's Wally";
	char dest[] = "Alice in Wonderland";
	int size = 13;  

	printf("src string: %s\nsrc string size: %d\ndest string: %s\n"
       	, src, ft_strlcpy(dest, src, size), dest); 
	return (0);
}
