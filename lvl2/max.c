/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:08:10 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/07 22:08:11 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int t;

	i = 0;
	t = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (t < tab[i])
			t = tab[i];
		i++;
	}
	if (i == len)
		return (t);
	return (0);
}

int		main(void)
{
	int tab[] = {};

	printf("%d\n", max(tab, 0));
	return (0);
}
