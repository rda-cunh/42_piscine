/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:29:41 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/02 11:26:19 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "maisUMteste";
	
	printf("String Before: %s\n", str);
	printf("String After: %s\n", ft_strupcase(str));
	return (0);	
}*/
