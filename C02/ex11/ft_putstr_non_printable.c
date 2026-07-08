/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:58:07 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/03 10:58:03 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcde";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			ft_hex(str[i]);
		}
		else 
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*
int	main (void)
{
	char str[] = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
	return (0);	
}*/
