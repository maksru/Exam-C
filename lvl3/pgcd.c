/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:44:14 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 17:44:16 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		atoi(char *s);

int		pgcd(int a, int b)
{
	int j;
	int div;

	j = 1;
	div = 0;
	while (j <= a && j <= b)
	{
		if ((a % j) == 0 && (b % j) == 0)
			div = j;
		j++;
	}
	return (div);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d", pgcd(a, b));
	}
	return (0);
}
