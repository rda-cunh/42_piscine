/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:13:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/10 13:08:32 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0) 
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(5,5));
	return (0);
}*/
