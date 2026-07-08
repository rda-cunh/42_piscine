/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:08:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/05 15:08:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0') 
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

	printf("original strcat = %s\n", strcat(dest, src));
//	printf("mine strcat = %s\n", ft_strcat(dest, src));	
	return (0);
}*/
