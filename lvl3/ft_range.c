/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 19:49:47 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/10/04 19:49:50 by rnaumenk         ###   ########.fr       */
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
			tab[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		tab = (int*)malloc(sizeof(*tab) * (end - start + 1));
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	return (tab);
}

int		main(void)
{
	int *s = ft_range(-1, 2);
	int i;

	i = 0;
	while (i < 4)
		{
			printf("%d\n", s[i]);
			i++;
		}
	return (0);
}