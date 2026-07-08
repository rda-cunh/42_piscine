/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:05:43 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/01 17:29:13 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "gd78AA(%";

	printf("string: %s\nlowercase? %d\n", str1, ft_str_is_lowercase(str1));
	printf("string: %s\nlowercase? %d\n", str2, ft_str_is_lowercase(str2));
	return (0);
}*/
