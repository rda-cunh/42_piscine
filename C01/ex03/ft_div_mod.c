/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:56:52 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/07/25 20:44:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	 main(void)
{
	int a = 16;
	int b = 5;
	int *ptra = &a;
	int *ptrb = &b;

	ft_div_mod(a, b, ptra, ptrb);
	printf("Resultado Divisao = %d\n", a);
	printf("Resto Divisao = %d", b);
	return (0);
}*/
