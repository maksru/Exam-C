/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 23:01:44 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/09 23:01:46 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	if (start > end)
	{
		tab = (int*)malloc(sizeof(*tab) * (start - end + 1));
		while (start >= end)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	else
	{
		tab = (int*)malloc(sizeof(*tab) * (end - start + 1));
		while (start <= end)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	return (tab);
}

int		main(void)
{
	int *s = ft_rrange(0, -3);
	int i;

	i = 0;
	while (i < 4)
	{
		printf("%d\n", s[i]);
		i++;
	}
	return (0);
}
