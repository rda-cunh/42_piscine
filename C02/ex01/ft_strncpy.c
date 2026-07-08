/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:56:20 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 11:09:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Where's Wally";
	char dest[] = "Alice in Wonderland";
	int n = 5;  

	printf("Before dest: %s\n", dest);

	ft_strncpy(dest, src, n);

	printf("After dest: %s\n", dest); 
	return (0);
}*/
