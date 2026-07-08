/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:08:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/06 11:37:02 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
		{
			if (to_find[j + i] == '\0')
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

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My name is Mario";
	char to_find[] = "is";

//	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
}
