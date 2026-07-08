/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:08:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/06 12:21:45 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (ft_len(to_find) == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && str[i + j] != '0')
		{
			if (j + 1 == ft_len(to_find))
			{
				return (str + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My name is Mario";
	char to_find[] = "is";

//	printf("strstr = %s\n", strstr(str, to_find));
	printf("ft_strstr = %s\n", ft_strstr(str, to_find));	
	return (0);
}*/
