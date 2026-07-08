/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:08:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 18:04:08 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') 
	{
		i++;
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

	printf("original strcmp = %d\n", strcmp(s1, s2));
	printf("mine strcmp = %d\n", ft_strcmp(s1, s2));	
	return (0);
}*/
