/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:07:20 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/12 13:07:22 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <stdlib.h>

int		atoi(const char *s);

void	fprime(int nb)
{
	int div;

	div = 2;
	if (nb == 1)
		printf("1");
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			if (div != nb)
				printf("*");
			nb = nb / div;
			div = 1;
		}
		div++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2 && atoi(argv[1]) >= 1)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
