/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:56:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/07/31 12:08:23 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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

	char src[] = "Where's Wally";
	char dest[] = "Alice in Wonderland";

	printf("Before dest: %s\n", dest);
	
	ft_strcpy(dest, src);
	
	printf("After dest: %s\n", dest);
	return (0);

}*/
