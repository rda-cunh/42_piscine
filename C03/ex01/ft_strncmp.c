/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:27:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/07 11:01:57 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (i < n - 1)
	{
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[] = "testeA";
        char s2[] = "testea--";
	int n = 5;
	
	printf("original strncmp = %d\n", strncmp(s1, s2, n));     
	printf("mine strncmp = %d\n", ft_strncmp(s1, s2, n));        
        return (0);
}*/
