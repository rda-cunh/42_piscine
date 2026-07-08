/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:01:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/07/31 11:08:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	c;

	c = 0;
	size--;
	while (c < size)
	{
		swap = tab[c];
		tab[c] = tab[size];
		tab[size] = swap;
		c++;
		size--;
	}
}
/*
#include <stdio.h>

int	main (void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i = 0;
	int j = 0;


	printf("Array Before: ");
	while (i < size)
		{
			printf("%d", tab[i]);
			i++;
		}
	
	printf("\n");
	ft_rev_int_tab(tab, size);
	
	printf("Array After: ");
	while (j < size)
		{
			printf("%d", tab[j]);
			j++;
		}
	printf("\n");
	return(0);
}*/
