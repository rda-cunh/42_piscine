/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:26:51 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 14:03:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main (void)
{
	int a = 1;
	int b = 2;
	int *ptra = &a;
	int *ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a = %d\n", a);
	printf("b = %d", b);
}*/
