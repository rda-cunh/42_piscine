/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:12:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/07/25 14:20:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <unistd.h>

int	main(void)
{
	int	c;
	int	*nbr;

	c = 5;
	nbr = &c;

	ft_ft(nbr); 

	write (1, &c, 1);
	return(1);
}

#include <stdio.h>

int     main(void)
{
        int     c;
        int     *nbr;

        c = 5;
        nbr = &c;

        ft_ft(nbr); 

        printf ("%d", c);
        return(1);
}*/
