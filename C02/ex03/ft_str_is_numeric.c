/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:51:37 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/01 17:01:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "123456789";
	char str2[] = "123aas9&^%";
	char str3[] = "";

	printf("string: %s \nNum or empty? %i\n\n", str1, ft_str_is_numeric(str1));
	printf("string: %s \nNum or emply? %i\n\n", str2, ft_str_is_numeric(str2));
	printf("string: %s \nNum or empty? %i\n\n", str3, ft_str_is_numeric(str3));
	return(0);
}*/
