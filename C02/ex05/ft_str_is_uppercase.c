/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:05:43 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/01 17:38:43 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "HELLO";
	char str2[] = "gd78AA(%";
	char str3[] = "";

	printf("string: %s\nuppercase? %d\n", str1, ft_str_is_uppercase(str1));
	printf("string: %s\nuppercase? %d\n", str2, ft_str_is_uppercase(str2));
	printf("string: %s\nuppercase? %d\n", str3, ft_str_is_uppercase(str3));
	return (0);
}*/
