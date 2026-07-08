/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:29:10 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/07/26 16:07:37 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 16;
	int b = 5;
	int *ptra = &a;
	int *ptrb = &b;

	printf("before a = %i \n", a);
	printf("before b = %i \n", b);

	ft_ultimate_div_mod(ptra, ptrb);

	printf("\nafter a = %i \n", a);
	printf("after b = %i", b);

	return(0);
}*/
