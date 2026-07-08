/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:01:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 11:27:02 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	c;
	int	d;

	c = 0;
	while (c < size)
	{
		d = 0;
		while (d < size)
		{
			if (tab[c] <= tab[d])
			{
				swap = tab[c];
				tab[c] = tab[d];
				tab[d] = swap;
			}
			d++;
		}
		c++;
	}
}
/*
#include <stdio.h>

int	main (void)
{
	int tab[] = {1, 15, 3, 10, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i = 0;
	int j = 0;


	printf("Array Before: ");
	while (i < size)
		{
			printf("%d ", tab[i]);
			i++;
		}
	
	printf("\n");
	ft_sort_int_tab(tab, size);
	
	printf("Array After: ");
	while (j < size)
		{
			printf("%d ", tab[j]);
			j++;
		}
	printf("\n");
	return(0);
}*/
