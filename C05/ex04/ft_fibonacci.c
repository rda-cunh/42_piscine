/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:13:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/10 11:55:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0) 
		return (0);
	if (index == 1)
		return (1);
	else 
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	return (0);
}*/
