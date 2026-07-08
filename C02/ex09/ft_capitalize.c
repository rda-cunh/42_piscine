/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:31:05 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/02 11:44:32 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (str[i] >= ' ' && str[i] <= '/' && str[i + 1] >= 'a'
			&& str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("String Before: %s\n", str);
	printf("String After: %s\n", ft_strcapitalize(str));
	return (0);	
}*/
