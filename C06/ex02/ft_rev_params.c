/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:23:28 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/08/08 16:16:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	l = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[l][j] != '\0')
		{
			ft_putchar(argv[l][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		l--;
	}
	return (0);
}
