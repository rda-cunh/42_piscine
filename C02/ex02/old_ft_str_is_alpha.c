/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:41:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/01 14:48:30 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	out;

	i = 0;
	if (str[0] == '\0')
	{
		out = 1;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			out = 1;
		}
		else
		{
			out = 0;
			break ;
		}
		i++;
	}
	return (out);
}
/*
#include <stdio.h>

int     main(void)
{
        char str1[] = "abcdEFGH";
        char str2[] = "asdn&%$93";
        char str3[] = "";

        printf("string: %s \nAlpha? %d\n\n", str1, ft_str_is_alpha(str1));
        printf("string: %s \nAlpha? %d\n\n", str2, ft_str_is_alpha(str2));
        printf("string: %s \nAlpha? %d\n\n", str3, ft_str_is_alpha(str3));
        return (0);
}*/
